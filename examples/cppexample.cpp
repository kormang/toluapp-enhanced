/*
** Lua binding: cppexample
** Generated automatically by tolua++-1.0.92 on Sun Jul 30 18:06:08 2017.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
int tolua_cppexample_open (lua_State* tolua_S);

#include "cppexample.h"
#include "required.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_KlassA (lua_State* tolua_S)
{
 KlassA* self = (KlassA*) tolua_tousertype(tolua_S,1,0);
 deleteKlassA(self);
 return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"KlassA");
 tolua_usertype(tolua_S,"KlassB");
}

/* method: getSomeInt of class  KlassA */
#ifndef TOLUA_DISABLE_tolua_cppexample_KlassA_getSomeInt00
static int tolua_cppexample_KlassA_getSomeInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"KlassA",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  KlassA* self = (KlassA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSomeInt'",NULL);
#endif
 {
 tolua_pushnumber(tolua_S,(lua_Number)(( int) self->getSomeInt()));
 }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSomeInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  KlassA */
#ifndef TOLUA_DISABLE_tolua_cppexample_KlassA_delete00
static int tolua_cppexample_KlassA_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"KlassA",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  KlassA* self = (KlassA*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'",NULL);
#endif
 deleteKlassA(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: deleteKlassA */
#ifndef TOLUA_DISABLE_tolua_cppexample_deleteKlassA00
static int tolua_cppexample_deleteKlassA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"KlassA",0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  KlassA* klassA = ((KlassA*)  tolua_tousertype(tolua_S,1,0));
 {
 deleteKlassA(klassA);
 }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'deleteKlassA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createKlassA of class  KlassB */
#ifndef TOLUA_DISABLE_tolua_cppexample_KlassB_createKlassA00
static int tolua_cppexample_KlassB_createKlassA00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
 !tolua_isusertype(tolua_S,1,"KlassB",0,&tolua_err) ||
 !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
 !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
 goto tolua_lerror;
 else
#endif
 {
  KlassB* self = (KlassB*)  tolua_tousertype(tolua_S,1,0);
  int param = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in function 'createKlassA'",NULL);
#endif
 try
 {
 {
#ifdef __cplusplus
 void* const tolua_obj = new KlassA((( KlassA) self->createKlassA(param)));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"KlassA");
#else
 KlassA* const tolua_obj = tolua_allocate_object(tolua_S,sizeof((( KlassA) self->createKlassA(param))));
 *tolua_obj = (( KlassA) self->createKlassA(param));
 tolua_pushusertype_and_takeownership(tolua_S,tolua_obj,"KlassA");
#endif
 }
 }
catch(std::exception&e)
{
 char errorBuffer[512];
 tolua_pushnil(tolua_S);
 snprintf(errorBuffer,512,"Exception of type 'std::exception' was thrown by function 'createKlassA'\nMessage: %s",e.what());
tolua_pushstring(tolua_S,errorBuffer);
 return 2;
}
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createKlassA'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
int tolua_cppexample_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
 #ifdef __cplusplus
 tolua_cclass(tolua_S,"KlassA","KlassA","",tolua_collect_KlassA);
 #else
 tolua_cclass(tolua_S,"KlassA","KlassA","",NULL);
 #endif
 tolua_beginmodule(tolua_S,"KlassA");
  tolua_function(tolua_S,"getSomeInt",tolua_cppexample_KlassA_getSomeInt00);
  tolua_function(tolua_S,"delete",tolua_cppexample_KlassA_delete00);
 tolua_endmodule(tolua_S);
 tolua_function(tolua_S,"deleteKlassA",tolua_cppexample_deleteKlassA00);
 tolua_cclass(tolua_S,"KlassB","KlassB","",NULL);
 tolua_beginmodule(tolua_S,"KlassB");
  tolua_function(tolua_S,"createKlassA",tolua_cppexample_KlassB_createKlassA00);
 tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 int luaopen_cppexample (lua_State* tolua_S) {
 return tolua_cppexample_open(tolua_S);
};
#endif

