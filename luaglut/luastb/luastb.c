#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include <GL/gl.h>

#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"

#define inline __inline
#include "../../macros.h"

#include "stb_image.h"

#define MYNAME "luastb"
#define VERSION "0.5"


#define STB_VERSION 0x01

//stbi_uc *stbi_load(char const *filename, int *x, int *y, int *comp, int req_comp)
LUA_API int Lstbi_load(lua_State *L) 
{
	const char * a1 = (const char *)check_string(L, 1);
	int x = 0;
	int y = 0;
	int comp = 0;
	int req_comp = 0;

	unsigned char * ret = stbi_load(a1, &x, &y, &comp, req_comp);

	// 返回的第一个参数标记成功或者失败
	lua_pushinteger(L, ret == 0 ? 0 : 1);
	lua_pushinteger(L, x);
	lua_pushinteger(L, y + 1);
	lua_pushlightuserdata(L, (void*)ret);

	//char buffer[128] = { 0 };
	//sprintf_s(buffer, 128, "%d,%d", x, y);
	//MessageBoxA(NULL, buffer, buffer, MB_OK);

	return 4;
}
// void stbi_image_free(void *retval_from_stbi_load)
FUN_vp(stbi_image_free);

void register_glut(lua_State *L)
{
	CONSTANT(STB_VERSION);
	FUN(stbi_load);
	FUN(stbi_image_free);
}

LUALIB_API int luaopen_luastb(lua_State *L)
{
	//MessageBoxA(NULL, "A", "B", MB_OK);
	//lua_register(L, "glCreateShader", luaglew_glCreateShader);

	register_glut(L);

	lua_newtable(L);

	lua_pushstring(L, "VERSION");
	lua_pushstring(L, VERSION);
	lua_settable(L, -3);

	lua_pushstring(L, MYNAME);
	lua_pushvalue(L, -2);
	lua_settable(L, LUA_GLOBALSINDEX);
	return 1;
}
