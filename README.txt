
-- INSTALLATION D'UNE INSTANCE DE DEV DU SITE WEB CREALEAD --

1) Cloner le projet crealead depuis Github.
git clone https://github.com/jabberwooki/crealead.git

2) Ajouter la branch develop
git checkout -b develop origin/develop

[OPTIONNEL] Initialisez Gitflow
git flow init

3) Aller dans le répertoire crealead
Vérifier que vous êtes bien sur la branch develop.

4) Construire la distribution Crealead à l'aide du script build.sh.
./scripts/build.sh

5) Aller dans le répertoire www

6) Créer la base de données
drush sql-create --db-su=login --db-su-pw=pass --db-url="mysql://db-user:db-pass@localhost/db-name"

7) Lancer l'installation
drush site-install crealead --db-url="mysql://db-user:db-pass@localhost/db-name"

8) IMPORTANT ! Copier le fichier settings.php généré par l'installation dans le répertoire "shared".

9) Régler les permissions
Revenir à la racine de votre répertoir de développement
cd ../..
Le répertoire crealead doit appartenir au user sous lequel vous êtes connecté et au groupe du serveur apache.
Sur ubuntu, passer la commande suivante :
sudo chown -R username:www-data crealead
puis
sudo chmod -R 770 crealead

10) Créer un vhost Apache.
créer un vhost www.crealead.dev
Le vhost doit pointer sur le répertoire .../crealead/www
Ce qui donne par exemple pour ubuntu 14.04 un fichier crealead.conf contenant :

-----
<VirtualHost *:80>
  ServerAdmin webmaster@localhost
  ServerName www.crealead.dev

  DocumentRoot /path/to/your/dev/folder/crealead/www

  ErrorLog ${APACHE_LOG_DIR}/error.log
  CustomLog ${APACHE_LOG_DIR}/access.log combined
</VirtualHost>
-----

11) Paramétrage des répertoires /tmp et /sites/all/translations
Dans le navigateur, aller sur les pages suivantes et enregistrez-les :
http://www.crealead.dev/admin/config/media/file-system
et
http://www.crealead.dev/admin/config/regional/language/update

12) Importation des traductions françaises
Aller sur la page /admin/config/regional/translate/update et cliquer sur "Check manually".
Une fois la vérification terminée, la langue French étant cochée, cliquer sur Update translations.
Les fichiers de traductions sont téléchargés dans /sites/all/translations, puis importées dans la base de données.

13) Développez !