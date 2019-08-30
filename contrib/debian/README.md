
Debian
====================
This directory contains files used to package bitphantomd/bitphantom-qt
for Debian-based Linux systems. If you compile bitphantomd/bitphantom-qt yourself, there are some useful files here.

## bitphantom: URI support ##


bitphantom-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bitphantom-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bitphantom-qt binary to `/usr/bin`
and the `../../share/pixmaps/bitphantom128.png` to `/usr/share/pixmaps`

bitphantom-qt.protocol (KDE)

