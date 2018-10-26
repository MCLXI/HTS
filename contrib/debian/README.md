
Debian
====================
This directory contains files used to package HTSd/HTS-qt
for Debian-based Linux systems. If you compile HTSd/HTS-qt yourself, there are some useful files here.

## HTS: URI support ##


HTS-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install HTS-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your HTS-qt binary to `/usr/bin`
and the `../../share/pixmaps/HTS128.png` to `/usr/share/pixmaps`

HTS-qt.protocol (KDE)

