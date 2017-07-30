# Optimized version of tolua++, and with additional features. Most suitable for embedded and other devices with slow CPU and very little RAM.

This version of to toluapp is based on CEGUI's version (http://cegui.org.uk/).

You can use this tool and library even if you're not using CEGUI. It is suitable for resource constrained systems, such as embedded system, but has useful additional features and optimizations that can be used elsewhere.

#### In here we have a modified version of the tolua++ 1.0.91, both code generator and runtime library with:

*	support for exception handling

*	destructor/collector renaming (usefull when destructors are private, and in C code) [(Solution for this question, from it's answer)](https://stackoverflow.com/questions/36200578/how-to-make-tolua-call-custom-code-in-collect-function)

*	ownership information is not stored in global tolua_gc table, but every object holds information if it is owned by Lua or not in itself, to avoid tolua_gc table grow too large [(Solution for this question, from it's answer)](https://stackoverflow.com/questions/35489256/does-toluapp-create-memory-leak-when-tolua-pushusertype-and-takeownership-is-use)

*	optimized code generation for returning value from native code to Lua (without copying values to stack and then again to heap, now it copies directly to heap)

#### Why this version of tolua++ has been made and how?
It's based on CEGUI dependency, tolua++ 1.0.91, and tested with Lua 5.1.4 and Lua 5.1.5. It is used in production as part of heavily optimized GUI framework based on CEGUI and runtime environment for applications written in Lua. **The whole system runs on 500MHz MIPS CPU and has 8MB of heap available.** To achieve this certain changes had to be made. Support for exceptions has been added by CEGUI team, other changes have been made by me. This code is literally taken out of the project I had been working on. I no longer work on that project, but if you need help, I could probably help you.

--------------------------------------------------------

## How to build tolua tool?

For instructions how to build tolua tool run:
	make help

If you made changes to tolua tool (in lua folder) execute:
	./remake_pkg.sh       - (on Linux)
or
	remake_pkg.bat       - (on Windows)

and then rebuild tolua. ( Just run:
	make clean_all
	make all
)

## You can try and integrate these changes into your existing tolua++ library.

## Pull requests are welcome.
