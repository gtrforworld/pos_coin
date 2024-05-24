
Debian
====================
This directory contains files used to package ulmexd/ulmex-qt
for Debian-based Linux systems. If you compile ulmexd/ulmex-qt yourself, there are some useful files here.

## ulmex: URI support ##


ulmex-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ulmex-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ulmex-qt binary to `/usr/bin`
and the `../../share/pixmaps/ulmex128.png` to `/usr/share/pixmaps`

ulmex-qt.protocol (KDE)

