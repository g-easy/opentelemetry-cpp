```
$ ./build.sh
+ clang++-8 -I../api/include/ -std=c++11 -fPIC -c lib1.cc
+ clang++-8 -shared -static-libgcc -static-libstdc++ -Wl,--version-script=export1.map lib1.o -o lib1.so
+ clang++-8 -I../api/include/ -std=c++11 -fPIC -c lib2.cc
+ clang++-8 -shared -static-libgcc -static-libstdc++ -Wl,--version-script=export2.map lib2.o -o lib2.so
+ clang++-8 -I../api/include/ -std=c++11 -c main.cc
+ clang++-8 -I../api/include/ -std=c++11 -L. -Wl,-R. -l1 -l2 main.o -o main
$ ./main
Start.
terminate called after throwing an instance of 'std::bad_weak_ptr'
  what():  bad_weak_ptr
Aborted
```
