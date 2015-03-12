<?php
class DartyWorkflow extends StateFlow {
  public function init() {
    // Initialize states
    $this->create_state('draft', array(
        'label' => t('Draft'),
    ));
    $this->create_state('approved', array(
        'label' => t('Approved'),
    ));
    $this->create_state('published', array(
        'label' => t('Published'),
        'on_enter' => array($this, 'on_enter_published'),
        'on_exit' => array($this, 'on_exit_published'),
    ));
    $this->create_state('unpublished', array(
        'label' => t('Unpublished'),
    ));

    if (module_exists('state_flow_schedule')) {
      $this->create_state('scheduled', array(
          'label' => t('Scheduled'),
          'on_exit' => array($this, 'on_exit_scheduled'),
      ));
    }

    // Initialize events
    $this->create_event('unpublish', array(
        'label' => t('Unpublish'),
        'origin' => 'published',
        'target' => 'unpublished',
        'guard' => 'darty_workflow_guard_publish',
    ));
    $this->create_event('approve', array(
        'label' => t('Approve'),
        'origin' => 'draft',
        'target' => 'approved',
        'guard' => 'darty_workflow_guard_approve',
    ));

    $to_draft = array(
        'label' => t('To Draft'),
        'origin' => 'approved',
        'target' => 'draft',
    );

    $to_publish = array(
        'label' => t('Publish'),
        'origin' => array('approved', 'unpublished'),
        'target' => 'published',
        'guard' => 'darty_workflow_guard_publish'
    );

    if (module_exists('state_flow_schedule')) {
      $this->create_event('schedule', array(
          'label' => t('Schedule'),
          'origin' => 'draft',
          'target' => 'scheduled',
          'guard' => 'state_flow_guard_schedule',
      ));
      $to_draft['origin'] = array(
          'approved',
          'scheduled',
      );
      $to_publish['origin'] = array(
          'approved',
          'scheduled',
      );
    }

    $this->create_event('to draft', $to_draft);
    $this->create_event('publish', $to_publish);
  }
}