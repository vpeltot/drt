#!/usr/bin/env bash

# Clear APC cache
drush php-eval "apc_clear_cache();"

# Enable maintenance mode
drush vset maintenance_mode 1

# Launch Drupal modules updates
drush updb -y

# Flush all cache
drush cc all

# Disable maintenance mode
drush vset maintenance_mode 0