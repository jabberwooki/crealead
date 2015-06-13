api = 2
core = 7.x

;=== Contrib modules ==========================================================
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = "3.0-rc5"

projects[better_formats][subdir] = contrib
projects[better_formats][version] = "1.0-beta1"

projects[ctools][subdir] = contrib
projects[ctools][version] = "1.7"

projects[ds][subdir] = contrib
projects[ds][version] = "2.8"

projects[entity][subdir] = contrib
projects[entity][version] = "1.6"

projects[features][subdir] = contrib
projects[features][version] = "2.5"

projects[features_extra][subdir] = contrib
projects[features_extra][version] = "1.0-beta1"

projects[field_group][subdir] = contrib
projects[field_group][version] = "1.4"

projects[files_undo_remove][subdir] = contrib
projects[files_undo_remove][version] = "1.3"

projects[imce][subdir] = contrib
projects[imce][version] = "1.9"

projects[imce_mkdir][subdir] = contrib
projects[imce_mkdir][version] = "1.0"

projects[jquery_update][subdir] = contrib
projects[jquery_update][version] = "2.5"

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = "2.0"

projects[libraries][subdir] = contrib
projects[libraries][version] = "2.2"

projects[link][subdir] = contrib
projects[link][version] = "1.3"

projects[linkit][subdir] = contrib
projects[linkit][version] = "3.3"

projects[options_element][subdir] = contrib
projects[options_element][version] = "1.12"

projects[role_export][subdir] = contrib
projects[role_export][version] = "1.0"

projects[strongarm][subdir] = contrib
projects[strongarm][version] = "2.0"

projects[taxonomy_access_fix][subdir] = contrib
projects[taxonomy_access_fix][version] = "2.1"

projects[token][subdir] = contrib
projects[token][version] = "1.6"

projects[user_settings_access][subdir] = contrib
projects[user_settings_access][version] = "1.0"

projects[uuid][subdir] = contrib
projects[uuid][version] = "1.0-alpha6"

projects[uuid_features][subdir] = contrib
projects[uuid_features][version] = "1.0-alpha4"

projects[views][subdir] = contrib
projects[views][version] = "3.11"

;=== Modules - optional =======================================================
;projects[bean][subdir] = contrib
;projects[bean][version] = ""

projects[block_class][subdir] = contrib
projects[block_class][version] = "2.1"

projects[boxes][subdir] = contrib
projects[boxes][version] = ""

projects[date][subdir] = contrib
projects[date][version] = "2.8"

projects[email][subdir] = contrib
projects[email][version] = "1.3"

projects[entityreference][subdir] = contrib
projects[entityreference][version] = "1.1"

;projects[field_collection][subdir] = contrib
;projects[field_collection][version] = "1.0-beta8"

;projects[filefield_sources][subdir] = contrib
;projects[filefield_sources][version] = "1.9"

;projects[migrate][subdir] = contrib
;projects[migrate][version] = "7.x-2.7"

;projects[migrate_extras][subdir] = contrib
;projects[migrate_extras][version] = "7.x-2.5"

projects[plupload][subdir] = contrib
projects[plupload][version] = "1.7"

;projects[views_bulk_operations][subdir] = contrib
;projects[views_bulk_operations][version] = "7.x-3.2"

;projects[views_slideshow][subdir] = contrib
;projects[views_slideshow][version] = "7.x-3.1"

;=== Kstarter features modules ================================================
includes[seo] = makefiles/seo.make
; Feature kpages doesn't need additionnal modules.
includes[edition] = makefiles/edition.make
includes[contextes] = makefiles/contextes.make
includes[development] = makefiles/development.make

;--- Optional -----------------------------------------------------------------
;includes[webstats_google] = makefiles/wstatsgoogle.make
;includes[webstats_piwik] = makefiles/wstatspiwik.make

;=== Themes ===================================================================
; Admin themes
includes[adminimal] = makefiles/themes/adminimal.make

; Front themes
;-------------
includes[bootstrap] = makefiles/themes/bootstrap.make

;=== Contrib modules and libraries for Crealead ==================================
;--- Scald and media related --------------------------------------------------
projects[scald][subdir] = contrib
projects[scald][version] = "1.4"

projects[scald_file][subdir] = contrib
projects[scald_file][version] = "1.1"

projects[scald_gallery][subdir] = contrib
projects[scald_gallery][version] = "2.5"

projects[scald_youtube][subdir] = contrib
projects[scald_youtube][version] = "1.4"
