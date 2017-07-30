/*
** Lua binding: cexample
** Generated automatically by tolua++-1.0.92 on Sun Jul 30 18:06:15 2017.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
int tolua_cexample_open (lua_State* tolua_S);

#include "cexample.h"
#include "required.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_structA (lua_State* tolua_S)
{
 structA* self = (structA*) tolua_tousertype(tolua_S,1,0);
 delete self;
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"structA");
}

/* get function: a of class  structA */
#ifndef TOLUA_DISABLE_tolua_get_structA_a
static int tolua_get_structA_a(lua_State* tolua_S)
{
  structA* self = (structA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  structA */
#ifndef TOLUA_DISABLE_tolua_set_structA_a
static int tolua_set_structA_a(lua_State* tolua_S)
{
  structA* self = (structA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  structA */
#ifndef TOLUA_DISABLE_tolua_get_structA_b
static int tolua_get_structA_b(lua_State* tolua_S)
{
  structA* self = (structA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
 tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  structA */
#ifndef TOLUA_DISABLE_tolua_set_structA_b
static int tolua_set_structA_b(lua_State* tolua_S)
{
  structA* self = (structA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
 if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: createStructA */
#ifndef TOLUA_DISABLE_tolua_cexample_createStructA00
static int tolua_cexample_createStructA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
 {
 {
#ifdef __cplusplus
 void* const tolua_obj = new structA((( structA) createStructA()));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"structA");
#else
 structA* const tolua_obj = tolua_allocate_object(tolua_S,sizeof((( structA) createStructA())));
 *tolua_obj = (( structA) createStructA());
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"structA");
#endif
 }
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createStructA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: freeStructA */
#ifndef TOLUA_DISABLE_tolua_cexample_freeStructA00
static int tolua_cexample_freeStructA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"structA",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  structA* sA = ((structA*)  tolua_tousertype(tolua_S,1,0));
 {
 freeStructA(sA);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'freeStructA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
int tolua_cexample_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"structA","structA","",tolua_collect_structA);
 #else
 tolua_cclass(tolua_S,"structA","structA","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"structA");
  tolua_variable(tolua_S,"a",tolua_get_structA_a,tolua_set_structA_a);
  tolua_variable(tolua_S,"b",tolua_get_structA_b,tolua_set_structA_b);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"createStructA",tolua_cexample_createStructA00);
 tolua_function(tolua_S,"freeStructA",tolua_cexample_freeStructA00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 int luaopen_cexample (lua_State* tolua_S) {
 return tolua_cexample_open(tolua_S);
};
#endif

