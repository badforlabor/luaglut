
#include <windows.h>

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

#define MYNAME "luamesh"
#define VERSION "0.5"

void DebugMsg(const char* msg)
{
	MessageBoxA(NULL, msg, msg, MB_OK);
}


extern int  tolua_mesh_open(lua_State* tolua_S);

LUALIB_API int luaopen_luamesh(lua_State *L)
{
	tolua_mesh_open(L);

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