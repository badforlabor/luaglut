/*
** Lua binding: mesh
** Generated automatically by tolua++-1.0.92 on 05/24/17 17:24:18.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
extern "C"
{
	TOLUA_API int  tolua_mesh_open (lua_State* tolua_S);
}

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "./model.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_libre__Model (lua_State* tolua_S)
{
 libre::Model* self = (libre::Model*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"libre::Model");
}

/* method: new of class  libre::Model */
#ifndef TOLUA_DISABLE_tolua_mesh_libre_Model_new00
static int tolua_mesh_libre_Model_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"libre::Model",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  string path = ((string)  tolua_tocppstring(tolua_S,2,0));
  {
   libre::Model* tolua_ret = (libre::Model*)  Mtolua_new((libre::Model)(path));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"libre::Model");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  libre::Model */
#ifndef TOLUA_DISABLE_tolua_mesh_libre_Model_new00_local
static int tolua_mesh_libre_Model_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"libre::Model",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  string path = ((string)  tolua_tocppstring(tolua_S,2,0));
  {
   libre::Model* tolua_ret = (libre::Model*)  Mtolua_new((libre::Model)(path));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"libre::Model");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Draw of class  libre::Model */
#ifndef TOLUA_DISABLE_tolua_mesh_libre_Model_Draw00
static int tolua_mesh_libre_Model_Draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"libre::Model",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  libre::Model* self = (libre::Model*)  tolua_tousertype(tolua_S,1,0);
  int shader = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Draw'", NULL);
#endif
  {
   self->Draw(shader);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_mesh_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"libre",0);
  tolua_beginmodule(tolua_S,"libre");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"Model","libre::Model","",tolua_collect_libre__Model);
   #else
   tolua_cclass(tolua_S,"Model","libre::Model","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"Model");
    tolua_function(tolua_S,"new",tolua_mesh_libre_Model_new00);
    tolua_function(tolua_S,"new_local",tolua_mesh_libre_Model_new00_local);
    tolua_function(tolua_S,".call",tolua_mesh_libre_Model_new00_local);
    tolua_function(tolua_S,"Draw",tolua_mesh_libre_Model_Draw00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_mesh (lua_State* tolua_S) {
 return tolua_mesh_open(tolua_S);
};
#endif

