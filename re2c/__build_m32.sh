#!/bin/sh

builddir=__build_m32
rm -rf $builddir
mkdir $builddir

cd $builddir
../configure --enable-debug CXXFLAGS="-m32" LDFLAGS="-m32" && \
make -j5
cd ..
