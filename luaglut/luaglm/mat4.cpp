/*
** Lua binding: mat4
** Generated automatically by tolua++-1.0.92 on 06/01/17 17:08:44.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
extern "C"
{
	TOLUA_API int  tolua_mat4_open (lua_State* tolua_S);
}

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_glm__mat4 (lua_State* tolua_S)
{
 glm::mat4* self = (glm::mat4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_glm__mat3 (lua_State* tolua_S)
{
 glm::mat3* self = (glm::mat3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"glm::mat4");
 tolua_usertype(tolua_S,"glm::mat3");
}

/* method: new of class  glm::mat3 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat3_new00
static int tolua_mat4_glm_mat3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::mat3* tolua_ret = (glm::mat3*)  Mtolua_new((glm::mat3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat3");
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

/* method: new_local of class  glm::mat3 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat3_new00_local
static int tolua_mat4_glm_mat3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::mat3* tolua_ret = (glm::mat3*)  Mtolua_new((glm::mat3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat3");
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

/* method: new of class  glm::mat3 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat3_new01
static int tolua_mat4_glm_mat3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4 a = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat3* tolua_ret = (glm::mat3*)  Mtolua_new((glm::mat3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::mat3 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat3_new01_local
static int tolua_mat4_glm_mat3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4 a = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat3* tolua_ret = (glm::mat3*)  Mtolua_new((glm::mat3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_new00
static int tolua_mat4_glm_mat4_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::mat4* tolua_ret = (glm::mat4*)  Mtolua_new((glm::mat4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat4");
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

/* method: new_local of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_new00_local
static int tolua_mat4_glm_mat4_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::mat4* tolua_ret = (glm::mat4*)  Mtolua_new((glm::mat4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat4");
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

/* method: new of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_new01
static int tolua_mat4_glm_mat4_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4 a = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat4* tolua_ret = (glm::mat4*)  Mtolua_new((glm::mat4)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_new01_local
static int tolua_mat4_glm_mat4_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4 a = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat4* tolua_ret = (glm::mat4*)  Mtolua_new((glm::mat4)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_new02
static int tolua_mat4_glm_mat4_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat3 a = *((glm::mat3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat4* tolua_ret = (glm::mat4*)  Mtolua_new((glm::mat4)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_new02_local
static int tolua_mat4_glm_mat4_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat3 a = *((glm::mat3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat4* tolua_ret = (glm::mat4*)  Mtolua_new((glm::mat4)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__add00
static int tolua_mat4_glm_mat4__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  glm::mat4 v = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self+(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__sub00
static int tolua_mat4_glm_mat4__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  glm::mat4 v = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self-(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__mul00
static int tolua_mat4_glm_mat4__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  glm::mat4 v = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self*(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__div00
static int tolua_mat4_glm_mat4__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  glm::mat4 v = *((glm::mat4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self/(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__add01
static int tolua_mat4_glm_mat4__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self+(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__sub01
static int tolua_mat4_glm_mat4__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self-(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__mul01
static int tolua_mat4_glm_mat4__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self*(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4__div01
static int tolua_mat4_glm_mat4__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::mat4 tolua_ret = *self/(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::mat4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::mat4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::mat4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_mat4_glm_mat4__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: get of class  glm::mat4 */
#ifndef TOLUA_DISABLE_tolua_mat4_glm_mat4_get00
static int tolua_mat4_glm_mat4_get00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4* self = (glm::mat4*)  tolua_tousertype(tolua_S,1,0);
  float i = ((float)  tolua_tonumber(tolua_S,2,0));
  float j = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'get'", NULL);
#endif
  {
   float tolua_ret = (*self)[i][j];
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_mat4_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"glm",0);
  tolua_beginmodule(tolua_S,"glm");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"mat3","glm::mat3","",tolua_collect_glm__mat3);
   #else
   tolua_cclass(tolua_S,"mat3","glm::mat3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"mat3");
    tolua_function(tolua_S,"new",tolua_mat4_glm_mat3_new00);
    tolua_function(tolua_S,"new_local",tolua_mat4_glm_mat3_new00_local);
    tolua_function(tolua_S,".call",tolua_mat4_glm_mat3_new00_local);
    tolua_function(tolua_S,"new",tolua_mat4_glm_mat3_new01);
    tolua_function(tolua_S,"new_local",tolua_mat4_glm_mat3_new01_local);
    tolua_function(tolua_S,".call",tolua_mat4_glm_mat3_new01_local);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"mat4","glm::mat4","",tolua_collect_glm__mat4);
   #else
   tolua_cclass(tolua_S,"mat4","glm::mat4","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"mat4");
    tolua_function(tolua_S,"new",tolua_mat4_glm_mat4_new00);
    tolua_function(tolua_S,"new_local",tolua_mat4_glm_mat4_new00_local);
    tolua_function(tolua_S,".call",tolua_mat4_glm_mat4_new00_local);
    tolua_function(tolua_S,"new",tolua_mat4_glm_mat4_new01);
    tolua_function(tolua_S,"new_local",tolua_mat4_glm_mat4_new01_local);
    tolua_function(tolua_S,".call",tolua_mat4_glm_mat4_new01_local);
    tolua_function(tolua_S,"new",tolua_mat4_glm_mat4_new02);
    tolua_function(tolua_S,"new_local",tolua_mat4_glm_mat4_new02_local);
    tolua_function(tolua_S,".call",tolua_mat4_glm_mat4_new02_local);
    tolua_function(tolua_S,".add",tolua_mat4_glm_mat4__add00);
    tolua_function(tolua_S,".sub",tolua_mat4_glm_mat4__sub00);
    tolua_function(tolua_S,".mul",tolua_mat4_glm_mat4__mul00);
    tolua_function(tolua_S,".div",tolua_mat4_glm_mat4__div00);
    tolua_function(tolua_S,".add",tolua_mat4_glm_mat4__add01);
    tolua_function(tolua_S,".sub",tolua_mat4_glm_mat4__sub01);
    tolua_function(tolua_S,".mul",tolua_mat4_glm_mat4__mul01);
    tolua_function(tolua_S,".div",tolua_mat4_glm_mat4__div01);
    tolua_function(tolua_S,"get",tolua_mat4_glm_mat4_get00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_mat4 (lua_State* tolua_S) {
 return tolua_mat4_open(tolua_S);
};
#endif

