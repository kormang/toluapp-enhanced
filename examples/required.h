#define __operator_increment    operator++
#define __operator_decrement    operator--
#define __operator_dereference  operator*

//This is used to keep compilers happy
#define CEGUIDeadException(e) &

#if defined(_MSC_VER) && !defined(snprintf)
#   define snprintf   _snprintf
#endif

// map the utf8string funcs to c-string funcs
#define tolua_pushutf8string(x,y) tolua_pushstring(x,y)
#define tolua_isutf8string tolua_isstring
#define tolua_isutf8stringarray tolua_isstringarray
#define tolua_pushfieldutf8string(L,lo,idx,s) tolua_pushfieldstring(L, lo, idx, s)
#define tolua_toutf8string tolua_tostring
#define tolua_tofieldutf8string tolua_tofieldstring
#define tolua_pushnil lua_pushnil
