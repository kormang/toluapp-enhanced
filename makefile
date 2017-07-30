#---------------------------------------------------------------------------
#
# Root Makefile for tolua++ tool and its dependencies
#
#---------------------------------------------------------------------------

CC = gcc
MAKE = make

ifeq ($(OS), Windows_NT)
	RM = del
	SLASH = $(subst /,\,/)
	PROG_SUFIX = .exe
else
	RM = rm -f
	SLASH = /
	PROG_SUFIX = 
endif

LUA_LIB = lua
LUA_ROOT = deps/lua-5.1.5
LUA_LIB_PATH = $(LUA_ROOT)/src
LUA_INCLUDE = $(LUA_ROOT)/src

TOLUAPP_LIB = toluapp
TOLUA_ROOT = deps/tolua++
TOLUA_LIB_PATH = $(TOLUA_ROOT)/lib
TOLUA_INCLUDE = $(TOLUA_ROOT)/include

ifeq ($(OS), Windows_NT)
	LIBS=-l$(LUA_LIB) -l$(TOLUAPP_LIB)
	LUA_MAKE_PARAM = mingw
else
	LIBS=-l$(LUA_LIB) -l$(TOLUAPP_LIB) -lm -ldl
	LUA_MAKE_PARAM = linux
endif

LIB_PATHS = -L$(LUA_LIB_PATH) -L$(TOLUA_LIB_PATH)
INCLUDE_PATHS = -I$(TOLUA_INCLUDE) -I$(LUA_INCLUDE)

.PHONY: all deps clean clean_deps clean_all help

#---------------------------------------------------------------------------
# Build dependencies (tolua and lua libraries) and tolua++ tool
#---------------------------------------------------------------------------
all: deps toluapp

#---------------------------------------------------------------------------
# Build tolua++ tool only
#---------------------------------------------------------------------------
toluapp: tolua.o toluabind.o
	$(CC) -o $@ tolua.o toluabind.o $(LIB_PATHS)  $(LIBS)

#---------------------------------------------------------------------------
# Build dependencies (tolua and lua libraries) only
#---------------------------------------------------------------------------
deps:
	$(MAKE) -C $(LUA_ROOT)  $(LUA_MAKE_PARAM)
	$(MAKE) -C $(TOLUA_ROOT)/src

clean_all: clean_deps clean

clean:
	$(RM) tolua.o toluabind.o toluapp$(PROG_SUFIX)

clean_deps:
	$(MAKE) -kC $(LUA_ROOT)  clean
	$(MAKE) -kC $(TOLUA_ROOT)/src clean

help:
	$(info --------------------------------------------------------------)
	$(info |                           Help                              |)
	$(info --------------------------------------------------------------)
	$(info                                                               )
	$(info To build both dependencies and tolua++ tool run: )
	$(info make all                                                   )
	$(info                                                               )
	$(info To build only tolua++ tool run: )
	$(info make toluapp                                                   )
	$(info                                                               )
	$(info To build dependencies - lua and tolua++ library run: )
	$(info make deps                                                   )
	$(info                                                               )
	$(info To clean everything, dependencies or only tolua++ tool use one of the following commands: )
	$(info make clean_all                                                   )
	$(info make clean_deps                                                   )
	$(info make clean                                                   )
	$(info                                                               )
	$(info                                                               )

#====================================================

tolua.o: tolua.c
	$(CC) -c $(CFLAGS) $(INCLUDE_PATHS) -o $@ $<

toluabind.o: toluabind.c toluabind.h
	$(CC) -c $(CFLAGS) $(INCLUDE_PATHS) -o $@ $<
