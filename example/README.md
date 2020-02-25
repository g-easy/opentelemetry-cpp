```
$ ./build.sh
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libc++ -c lib1.cc
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libstdc++ -c lib2.cc
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libstdc++ -c main.cc
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libstdc++ lib1.o lib2.o main.o -o main
$ ./main
Start.
Stop.
```
