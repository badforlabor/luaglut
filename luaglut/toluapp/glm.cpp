/*
** Lua binding: glm
** Generated automatically by tolua++-1.0.92 on 05/15/17 18:47:11.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_glm_open (lua_State* tolua_S);

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_glm__vec3 (lua_State* tolua_S)
{
 glm::vec3* self = (glm::vec3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"glm::vec3");
}

/* function: glm::radians */
#ifndef TOLUA_DISABLE_tolua_glm_glm_radians00
static int tolua_glm_glm_radians00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float a = ((float)  tolua_tonumber(tolua_S,1,0));
  {
   float tolua_ret = (float)  glm::radians(a);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'radians'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::radians */
#ifndef TOLUA_DISABLE_tolua_glm_glm_radians01
static int tolua_glm_glm_radians01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,1,0));
  {
   glm::vec3 tolua_ret = (glm::vec3)  glm::radians(a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec3)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec3));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_glm_glm_radians00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_glm_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"glm",0);
  tolua_beginmodule(tolua_S,"glm");
   tolua_function(tolua_S,"radians",tolua_glm_glm_radians00);
   tolua_function(tolua_S,"radians",tolua_glm_glm_radians01);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_glm (lua_State* tolua_S) {
 return tolua_glm_open(tolua_S);
};
#endif

