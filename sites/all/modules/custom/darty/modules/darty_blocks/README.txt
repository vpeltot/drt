Pour ajouter un avertissement de modification d'un type de block sur une page publiée, il est néccessaire de définir le préfixe du delta correspondant.

Exemple: 

/**
* Type de bloc bean
*/
if($form_id == 'bean_form'){
  $value = $form['bean']['#value'];
  $block_delta = 'bean-'.$value->delta;
}