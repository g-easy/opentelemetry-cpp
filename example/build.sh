#!/bin/bash
CXX=clang++-8
set -e
set -x
$CXX -I../api/include/ -std=c++11 -fPIC -c lib1.cc
$CXX -shared -static-libgcc -static-libstdc++ -Wl,--version-script=export1.map lib1.o -o lib1.so

$CXX -I../api/include/ -std=c++11 -fPIC -c lib2.cc
$CXX -shared -static-libgcc -static-libstdc++ -Wl,--version-script=export2.map lib2.o -o lib2.so

$CXX -I../api/include/ -std=c++11 -c main.cc
$CXX -I../api/include/ -std=c++11 -L. -Wl,-R. -l1 -l2 main.o -o main
