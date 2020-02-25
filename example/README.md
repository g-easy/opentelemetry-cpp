```
$ ./build.sh
+ clang++-8 -I../api/include/ -std=c++11 -fPIC -c lib1.cc
+ clang++-8 -shared -static-libgcc -static-libstdc++ -Wl,--version-script=export1.map lib1.o -o lib1.so
+ clang++-8 -I../api/include/ -std=c++11 -fPIC -c lib2.cc
+ clang++-8 -shared -static-libgcc -static-libstdc++ -Wl,--version-script=export2.map lib2.o -o lib2.so
+ clang++-8 -I../api/include/ -std=c++11 -c main.cc
+ clang++-8 -I../api/include/ -std=c++11 -L. -Wl,-R. -l1 -l2 main.o -o main
$ ./main
$ ./main
Start.
main: GetTracerProvider = 0xf88b00
f1: GetTracerProvider = 0xf88b80
f2: GetTracerProvider = 0xf88c00
main: GetTracerProvider later = 0xf88b00
Stop.
```
