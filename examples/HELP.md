#### These are examples of how we can generate C and C++ code with special features provided.

Feel free to explore these files:
 * required.h
 * cexample.pkg
 * cexample.h
 * cexample.c (generated)
 * cppexample.pkg
 * cppexample.h
 * cppexample.cpp (generated)

You can generate code like this:

	../toluapp -o cppexample.cpp cppexample.pkg
	../toluapp -o cexample.c cexample.pkg

And you can compile these examples like this:

	g++ -c -I../deps/tolua++/include -I../deps/lua-5.1.5/src cppexample.cpp
	gcc -c -I../deps/tolua++/include -I../deps/lua-5.1.5/src cexample.c

But these are just object files, they just serve as an example.

## You can try and integrate these changes into your existing tolua++ library.
