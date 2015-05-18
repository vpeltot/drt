#!/usr/bin/env bash

# Clear APC cache
drush php-eval "apc_clear_cache();"

# Enable maintenance mode
drush vset maintenance_mode 1

# Launch Drupal modules updates
# Activate new node view count module
drush updb -y

# Run php-script to migrate node view count data
drush php-script darty_nodeviewcount_migrate
drush php-script sites/default/darty_nodeviewcount_migrate

# Disable old node view count module
drush dis nodeviewcount -y

# Flush all cache
drush cc all

# Disable maintenance mode
drush vset maintenance_mode 0
