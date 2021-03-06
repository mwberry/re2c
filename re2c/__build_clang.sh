#!/bin/sh

builddir=__build_clang
rm -rf $builddir
mkdir $builddir

cd $builddir
../configure --enable-debug CC=clang CXX=clang++ && \
make -j5
cd ..
