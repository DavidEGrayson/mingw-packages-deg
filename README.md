This repository holds the files needed to build my the MinGW-based packaged I provide for [MSYS2](http://msys2.github.io/).

This is for software that I am interested in running in MSYS2 which is not part of [Alexpux's MINGW-Packages](https://github.com/Alexpux/MINGW-packages) repository.

To build thee, run an MSYS2 shell, navigate to the directory of the package you want to build, and then run `makepkg-mingw`.

The `MINGW_INSTALLS` variable can be set to `mingw64` if you only want to build the win64 version, or `mingw32` if you only want to build the win32 version.

To install the built package on your system, run something like:

    pacman -U *.pkg.tar.xz

