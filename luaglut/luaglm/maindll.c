
#include <windows.h>

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

#define MYNAME "luaglm"
#define VERSION "0.5"

void DebugMsg(const char* msg)
{
	MessageBoxA(NULL, msg, msg, MB_OK);
}


extern int  tolua_tclass_open(lua_State* tolua_S);
extern int  tolua_vec3_open(lua_State* tolua_S);
extern int  tolua_glm_open(lua_State* tolua_S);
extern int  tolua_mat4_open(lua_State* tolua_S);

LUALIB_API int luaopen_luaglm(lua_State *L)
{
	tolua_tclass_open(L);
	tolua_vec3_open(L);
	tolua_glm_open(L);
	tolua_mat4_open(L);
	
	lua_newtable(L);
	//luaL_register(L, NULL, luaglew_lib);
	//luaglew_const_bind(L);

	lua_pushstring(L, "VERSION");
	lua_pushstring(L, VERSION);
	lua_settable(L, -3);

	lua_pushstring(L, MYNAME);
	lua_pushvalue(L, -2);
	lua_settable(L, LUA_GLOBALSINDEX);

	return 1;
}