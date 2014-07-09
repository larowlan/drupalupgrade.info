Drupal Upgrade dot info
=======================

## Overview

The code-base that powers the drupalupgrade.info for the D8CX initiative

## Credits

Code by d8CX team

- Lee Rowlands (larowlan) (Previous Next)
- Tim Plunkett (timplunkett) (Acquia)
- Angela Byron (webchick) (Acquia)
- Dave Reid (davereid) (Lullabot)
- Kim Pepper (kim.pepper) (Previous Next)
- Michael Schmid (schnitzel) (Amazee Labs)

Project Management: Nick Waring (nickwaring89) (Previous Next)

Vagrant/Puppet manifests: Adapted from github.com/nickshuch/vd8 by Nick Schuch (nick_schuch) (Previous Next)

## Roadmap

* Phing targets.
* Custom packer image to shorten provision time.

## Requirements for local dev

### Bundler

Install required gems for theme development with

```
bundle install --path vendor/bundle
```

Build sass with one of
```
phing compass:watch
```
or
```
phing compass:compile
```

### Virtualbox (4.3.6)

Virtualbox can be downloaded and installed from:

https://www.virtualbox.org/wiki/Downloads

### Vagrant (1.3 to 1.5)

Vagrant can be downloaded and installed from:

http://www.vagrantup.com/downloads.html

This also required the autonetwork plugin which can be installed by:

```
vagrant plugin install vagrant-auto_network
```

#### Plugins

These are software versions we know work:

* Vagrant Auto-network: 0.2.1

#### Usage

The machine can can be booted by the following command:

```
vagrant up
```

The host will be provisioned automatically on the first `vagrant up`. If you
wish to rerun the provision that can be done with the following command:

```
vagrant provision
```

More vagrant commands and documenation can be found here:

http://docs.vagrantup.com/v2

## Local DNS

WE REQUIRE THE "Vagrant Auto-network" PLUGIN AS MENTIONED ABOVE.

## Drupal

Adding Drupal:

```
drush dl drupal
mv drupal-7.{x} app
```

To install (warning will delete all files and database)

```
phing reinstall
```

## Theme

Looks a bit like this so far
![](https://dl.dropbox.com/s/vu7ami790yx9pyh/Screenshot%202014-07-09%2010.27.35.png)
