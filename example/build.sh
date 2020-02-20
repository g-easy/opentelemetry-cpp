#!/bin/bash
CXX=clang++-8
set -e
set -x
$CXX -I../api/include/ -std=c++11 -stdlib=libc++ -c lib1.cc
$CXX -I../api/include/ -std=c++11 -stdlib=libstdc++ -c lib2.cc
$CXX -I../api/include/ -std=c++11 -stdlib=libstdc++ -c main.cc
$CXX -I../api/include/ -std=c++11 -stdlib=libstdc++ lib1.o lib2.o main.o -o main
