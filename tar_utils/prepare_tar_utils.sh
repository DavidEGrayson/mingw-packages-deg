MINGW_PREFIX=/mingw64
BIN=$MINGW_PREFIX/bin

rm -f tar_utils.zip
zip -j tar_utils.zip \
    $BIN/bsdtar.exe \
    $BIN/xz.exe \
    $BIN/libbz2-1.dll \
    $BIN/libexpat-1.dll \
    $BIN/libiconv-2.dll \
    $BIN/liblzma-5.dll \
    $BIN/liblzo2-2.dll \
    $BIN/libnettle-6-1.dll \
    $BIN/libsystre-0.dll \
    $BIN/zlib1.dll \
    $BIN/libintl-8.dll \
    $BIN/libtre-5.dll
