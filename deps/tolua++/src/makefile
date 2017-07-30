# ****************************************
# Define module name
# ****************************************
MODULE  = toluapp
CC = gcc
AR = ar

UNIX_SLASH = /
DOS_SLASH = $(subst /,\,$(UNIX_SLASH))

ifeq ($(OS), Windows_NT)
	RM = del
	CP = copy
	GOOD_SLASH = $(DOS_SLASH)
	BAD_SLASH = $(UNIX_SLASH)
else
	RM = rm -f
	CP = cp
	GOOD_SLASH = $(UNIX_SLASH)
	BAD_SLASH = $(DOS_SLASH)
endif

INCLUDE_PREFIX = -I
LIB_PATH_PREFIX = -L
LIB_NAME_PREFIX = -l

LIB_PREFFIX = lib
LIB_SUFFIX = a

LUA_ROOT=../../lua-5.1.5

LUA_INCLUDE=$(LUA_ROOT)/src
LUA_LIB_PATH=$(LUA_ROOT)/lib

TOLUAPP_ROOT=..
TOLUAPP_INCLUDE=$(TOLUAPP_ROOT)/include
TOLUAPP_LIB_PATH=$(TOLUAPP_ROOT)/lib

SRCS = tolua_event.c tolua_is.c tolua_map.c tolua_push.c tolua_to.c

DIR_INCLUDE = $(INCLUDE_PREFIX)$(TOLUAPP_INCLUDE) $(INCLUDE_PREFIX)$(LUA_INCLUDE)
DIR_LIB_PATHS = $(LIB_PATH_PREFIX)$(LUA_LIB_PATH)
DIR_LIB_NAMES = $(LIB_NAME_PREFIX)lua

LIBOBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: $(LIB_PREFFIX)$(MODULE).$(LIB_SUFFIX)

$(LIB_PREFFIX)$(MODULE).$(LIB_SUFFIX): $(LIBOBJS)
	$(AR) rcs $@ $^
	$(CP) $@ $(subst $(BAD_SLASH),$(GOOD_SLASH),$(TOLUAPP_LIB_PATH)/$@)
	$(RM) $@

%.o: %.c
	$(CC) -c $(DIR_INCLUDE) -o $@ $<

clean:
	$(RM) *.o *~