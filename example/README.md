```
$ ./build.sh
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libc++ -c lib1.cc
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libstdc++ -c lib2.cc
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libstdc++ -c main.cc
+ clang++-8 -I../api/include/ -std=c++11 -stdlib=libstdc++ lib1.o lib2.o main.o -o main
/usr/bin/ld: lib1.o: in function `std::__1::weak_ptr<opentelemetry::trace::NoopTracer>::~weak_ptr()':
lib1.cc:(.text._ZNSt3__18weak_ptrIN13opentelemetry5trace10NoopTracerEED2Ev[_ZNSt3__18weak_ptrIN13opentelemetry5trace10NoopTracerEED2Ev]+0x28): undefined reference to `std::__1::__shared_weak_count::__release_weak()'
/usr/bin/ld: lib1.o: in function `_ZNSt3__110shared_ptrIN13opentelemetry5trace10NoopTracerEEC2IS3_EERKNS_8weak_ptrIT_EENS_9enable_ifIXsr14is_convertibleIPS7_PS3_EE5valueENS4_5__natEE4typeE':
lib1.cc:(.text._ZNSt3__110shared_ptrIN13opentelemetry5trace10NoopTracerEEC2IS3_EERKNS_8weak_ptrIT_EENS_9enable_ifIXsr14is_convertibleIPS7_PS3_EE5valueENS4_5__natEE4typeE[_ZNSt3__110shared_ptrIN13opentelemetry5trace10NoopTracerEEC2IS3_EERKNS_8weak_ptrIT_EENS_9enable_ifIXsr14is_convertibleIPS7_PS3_EE5valueENS4_5__natEE4typeE]+0x48): undefined reference to `std::__1::__shared_weak_count::lock()'
/usr/bin/ld: lib1.o: in function `std::__1::__throw_bad_weak_ptr()':
lib1.cc:(.text._ZNSt3__120__throw_bad_weak_ptrEv[_ZNSt3__120__throw_bad_weak_ptrEv]+0x3a): undefined reference to `typeinfo for std::__1::bad_weak_ptr'
/usr/bin/ld: lib1.cc:(.text._ZNSt3__120__throw_bad_weak_ptrEv[_ZNSt3__120__throw_bad_weak_ptrEv]+0x44): undefined reference to `std::__1::bad_weak_ptr::~bad_weak_ptr()'
/usr/bin/ld: lib1.o: in function `std::__1::bad_weak_ptr::bad_weak_ptr()':
lib1.cc:(.text._ZNSt3__112bad_weak_ptrC2Ev[_ZNSt3__112bad_weak_ptrC2Ev]+0x21): undefined reference to `vtable for std::__1::bad_weak_ptr'
/usr/bin/ld: lib1.o: in function `std::__1::__shared_weak_count::__release_shared()':
lib1.cc:(.text._ZNSt3__119__shared_weak_count16__release_sharedEv[_ZNSt3__119__shared_weak_count16__release_sharedEv]+0x31): undefined reference to `std::__1::__shared_weak_count::__release_weak()'
clang: error: linker command failed with exit code 1 (use -v to see invocation)
```
