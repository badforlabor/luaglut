/*
** Lua binding: vec3
** Generated automatically by tolua++-1.0.92 on 06/22/17 14:34:35.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
extern "C"
{
	TOLUA_API int  tolua_vec3_open (lua_State* tolua_S);
}

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_glm__vec2 (lua_State* tolua_S)
{
 glm::vec2* self = (glm::vec2*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_glm__vec3 (lua_State* tolua_S)
{
 glm::vec3* self = (glm::vec3*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_glm__vec4 (lua_State* tolua_S)
{
 glm::vec4* self = (glm::vec4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"glm::vec2");
 tolua_usertype(tolua_S,"glm::vec3");
 tolua_usertype(tolua_S,"glm::vec4");
}

/* get function: x of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec2_x
static int tolua_get_glm__vec2_x(lua_State* tolua_S)
{
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec2_x
static int tolua_set_glm__vec2_x(lua_State* tolua_S)
{
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec2_y
static int tolua_get_glm__vec2_y(lua_State* tolua_S)
{
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec2_y
static int tolua_set_glm__vec2_y(lua_State* tolua_S)
{
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_new00
static int tolua_vec3_glm_vec2_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec2* tolua_ret = (glm::vec2*)  Mtolua_new((glm::vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec2");
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

/* method: new_local of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_new00_local
static int tolua_vec3_glm_vec2_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec2* tolua_ret = (glm::vec2*)  Mtolua_new((glm::vec2)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec2");
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

/* method: new of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_new01
static int tolua_vec3_glm_vec2_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec2 a = *((glm::vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec2* tolua_ret = (glm::vec2*)  Mtolua_new((glm::vec2)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_new01_local
static int tolua_vec3_glm_vec2_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec2 a = *((glm::vec2*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec2* tolua_ret = (glm::vec2*)  Mtolua_new((glm::vec2)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_new02
static int tolua_vec3_glm_vec2_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xf = ((float)  tolua_tonumber(tolua_S,2,0));
  float yf = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   glm::vec2* tolua_ret = (glm::vec2*)  Mtolua_new((glm::vec2)(xf,yf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec2");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_new02_local
static int tolua_vec3_glm_vec2_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xf = ((float)  tolua_tonumber(tolua_S,2,0));
  float yf = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   glm::vec2* tolua_ret = (glm::vec2*)  Mtolua_new((glm::vec2)(xf,yf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2_length00
static int tolua_vec3_glm_vec2_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__add00
static int tolua_vec3_glm_vec2__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  glm::vec2 v = *((glm::vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self+(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
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

/* method: operator- of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__sub00
static int tolua_vec3_glm_vec2__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  glm::vec2 v = *((glm::vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self-(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
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

/* method: operator* of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__mul00
static int tolua_vec3_glm_vec2__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  glm::vec2 v = *((glm::vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self*(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
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

/* method: operator/ of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__div00
static int tolua_vec3_glm_vec2__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec2",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  glm::vec2 v = *((glm::vec2*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self/(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
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

/* method: operator+ of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__add01
static int tolua_vec3_glm_vec2__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self+(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__sub01
static int tolua_vec3_glm_vec2__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self-(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__mul01
static int tolua_vec3_glm_vec2__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self*(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  glm::vec2 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec2__div01
static int tolua_vec3_glm_vec2__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec2",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec2* self = (glm::vec2*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::vec2 tolua_ret = *self/(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec2)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec2));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec2");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec2__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec4_x
static int tolua_get_glm__vec4_x(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec4_x
static int tolua_set_glm__vec4_x(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec4_y
static int tolua_get_glm__vec4_y(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec4_y
static int tolua_set_glm__vec4_y(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec4_z
static int tolua_get_glm__vec4_z(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec4_z
static int tolua_set_glm__vec4_z(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: w of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec4_w
static int tolua_get_glm__vec4_w(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->w);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: w of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec4_w
static int tolua_set_glm__vec4_w(lua_State* tolua_S)
{
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'w'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->w = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new00
static int tolua_vec3_glm_vec4_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
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

/* method: new_local of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new00_local
static int tolua_vec3_glm_vec4_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
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

/* method: new of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new01
static int tolua_vec3_glm_vec4_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4 a = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new01_local
static int tolua_vec3_glm_vec4_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4 a = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new02
static int tolua_vec3_glm_vec4_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  float wf = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)(a,wf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new02_local
static int tolua_vec3_glm_vec4_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  float wf = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)(a,wf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new03
static int tolua_vec3_glm_vec4_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xf = ((float)  tolua_tonumber(tolua_S,2,0));
  float yf = ((float)  tolua_tonumber(tolua_S,3,0));
  float zf = ((float)  tolua_tonumber(tolua_S,4,0));
  float wf = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)(xf,yf,zf,wf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_new03_local
static int tolua_vec3_glm_vec4_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xf = ((float)  tolua_tonumber(tolua_S,2,0));
  float yf = ((float)  tolua_tonumber(tolua_S,3,0));
  float zf = ((float)  tolua_tonumber(tolua_S,4,0));
  float wf = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   glm::vec4* tolua_ret = (glm::vec4*)  Mtolua_new((glm::vec4)(xf,yf,zf,wf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4_length00
static int tolua_vec3_glm_vec4_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__add00
static int tolua_vec3_glm_vec4__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  glm::vec4 v = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self+(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
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

/* method: operator- of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__sub00
static int tolua_vec3_glm_vec4__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  glm::vec4 v = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self-(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
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

/* method: operator* of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__mul00
static int tolua_vec3_glm_vec4__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  glm::vec4 v = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self*(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
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

/* method: operator/ of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__div00
static int tolua_vec3_glm_vec4__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  glm::vec4 v = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self/(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
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

/* method: operator+ of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__add01
static int tolua_vec3_glm_vec4__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self+(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__sub01
static int tolua_vec3_glm_vec4__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self-(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__mul01
static int tolua_vec3_glm_vec4__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self*(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  glm::vec4 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec4__div01
static int tolua_vec3_glm_vec4__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec4",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4* self = (glm::vec4*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::vec4 tolua_ret = *self/(v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((glm::vec4)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(glm::vec4));
     tolua_pushusertype(tolua_S,tolua_obj,"glm::vec4");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec4__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec3_x
static int tolua_get_glm__vec3_x(lua_State* tolua_S)
{
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec3_x
static int tolua_set_glm__vec3_x(lua_State* tolua_S)
{
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec3_y
static int tolua_get_glm__vec3_y(lua_State* tolua_S)
{
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec3_y
static int tolua_set_glm__vec3_y(lua_State* tolua_S)
{
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_get_glm__vec3_z
static int tolua_get_glm__vec3_z(lua_State* tolua_S)
{
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_set_glm__vec3_z
static int tolua_set_glm__vec3_z(lua_State* tolua_S)
{
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new00
static int tolua_vec3_glm_vec3_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
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

/* method: new_local of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new00_local
static int tolua_vec3_glm_vec3_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
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

/* method: new of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new01
static int tolua_vec3_glm_vec3_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new01_local
static int tolua_vec3_glm_vec3_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float a = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new02
static int tolua_vec3_glm_vec3_new02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new02_local
static int tolua_vec3_glm_vec3_new02_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new01_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new03
static int tolua_vec3_glm_vec3_new03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4 a = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new03_local
static int tolua_vec3_glm_vec3_new03_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec4 a = *((glm::vec4*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(a));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new02_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new04
static int tolua_vec3_glm_vec3_new04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xf = ((float)  tolua_tonumber(tolua_S,2,0));
  float yf = ((float)  tolua_tonumber(tolua_S,3,0));
  float zf = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(xf,yf,zf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_new04_local
static int tolua_vec3_glm_vec3_new04_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float xf = ((float)  tolua_tonumber(tolua_S,2,0));
  float yf = ((float)  tolua_tonumber(tolua_S,3,0));
  float zf = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   glm::vec3* tolua_ret = (glm::vec3*)  Mtolua_new((glm::vec3)(xf,yf,zf));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_vec3_glm_vec3_new03_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: length of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3_length00
static int tolua_vec3_glm_vec3_length00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'length'", NULL);
#endif
  {
   float tolua_ret = (float)  self->length();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'length'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__add00
static int tolua_vec3_glm_vec3__add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  glm::vec3 v = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self+(v);
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
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__sub00
static int tolua_vec3_glm_vec3__sub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  glm::vec3 v = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self-(v);
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
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.sub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__mul00
static int tolua_vec3_glm_vec3__mul00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  glm::vec3 v = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self*(v);
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
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.mul'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__div00
static int tolua_vec3_glm_vec3__div00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  glm::vec3 v = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self/(v);
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
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function '.div'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator+ of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__add01
static int tolua_vec3_glm_vec3__add01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator+'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self+(v);
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
 return tolua_vec3_glm_vec3__add00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator- of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__sub01
static int tolua_vec3_glm_vec3__sub01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator-'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self-(v);
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
 return tolua_vec3_glm_vec3__sub00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator* of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__mul01
static int tolua_vec3_glm_vec3__mul01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator*'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self*(v);
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
 return tolua_vec3_glm_vec3__mul00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: operator/ of class  glm::vec3 */
#ifndef TOLUA_DISABLE_tolua_vec3_glm_vec3__div01
static int tolua_vec3_glm_vec3__div01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  glm::vec3* self = (glm::vec3*)  tolua_tousertype(tolua_S,1,0);
  float v = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'operator/'", NULL);
#endif
  {
   glm::vec3 tolua_ret = *self/(v);
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
 return tolua_vec3_glm_vec3__div00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_vec3_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"glm",0);
  tolua_beginmodule(tolua_S,"glm");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vec2","glm::vec2","",tolua_collect_glm__vec2);
   #else
   tolua_cclass(tolua_S,"vec2","glm::vec2","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vec2");
    tolua_variable(tolua_S,"x",tolua_get_glm__vec2_x,tolua_set_glm__vec2_x);
    tolua_variable(tolua_S,"y",tolua_get_glm__vec2_y,tolua_set_glm__vec2_y);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec2_new00);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec2_new00_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec2_new00_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec2_new01);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec2_new01_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec2_new01_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec2_new02);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec2_new02_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec2_new02_local);
    tolua_function(tolua_S,"length",tolua_vec3_glm_vec2_length00);
    tolua_function(tolua_S,".add",tolua_vec3_glm_vec2__add00);
    tolua_function(tolua_S,".sub",tolua_vec3_glm_vec2__sub00);
    tolua_function(tolua_S,".mul",tolua_vec3_glm_vec2__mul00);
    tolua_function(tolua_S,".div",tolua_vec3_glm_vec2__div00);
    tolua_function(tolua_S,".add",tolua_vec3_glm_vec2__add01);
    tolua_function(tolua_S,".sub",tolua_vec3_glm_vec2__sub01);
    tolua_function(tolua_S,".mul",tolua_vec3_glm_vec2__mul01);
    tolua_function(tolua_S,".div",tolua_vec3_glm_vec2__div01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vec4","glm::vec4","",tolua_collect_glm__vec4);
   #else
   tolua_cclass(tolua_S,"vec4","glm::vec4","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vec4");
    tolua_variable(tolua_S,"x",tolua_get_glm__vec4_x,tolua_set_glm__vec4_x);
    tolua_variable(tolua_S,"y",tolua_get_glm__vec4_y,tolua_set_glm__vec4_y);
    tolua_variable(tolua_S,"z",tolua_get_glm__vec4_z,tolua_set_glm__vec4_z);
    tolua_variable(tolua_S,"w",tolua_get_glm__vec4_w,tolua_set_glm__vec4_w);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec4_new00);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec4_new00_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec4_new00_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec4_new01);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec4_new01_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec4_new01_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec4_new02);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec4_new02_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec4_new02_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec4_new03);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec4_new03_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec4_new03_local);
    tolua_function(tolua_S,"length",tolua_vec3_glm_vec4_length00);
    tolua_function(tolua_S,".add",tolua_vec3_glm_vec4__add00);
    tolua_function(tolua_S,".sub",tolua_vec3_glm_vec4__sub00);
    tolua_function(tolua_S,".mul",tolua_vec3_glm_vec4__mul00);
    tolua_function(tolua_S,".div",tolua_vec3_glm_vec4__div00);
    tolua_function(tolua_S,".add",tolua_vec3_glm_vec4__add01);
    tolua_function(tolua_S,".sub",tolua_vec3_glm_vec4__sub01);
    tolua_function(tolua_S,".mul",tolua_vec3_glm_vec4__mul01);
    tolua_function(tolua_S,".div",tolua_vec3_glm_vec4__div01);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vec3","glm::vec3","",tolua_collect_glm__vec3);
   #else
   tolua_cclass(tolua_S,"vec3","glm::vec3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vec3");
    tolua_variable(tolua_S,"x",tolua_get_glm__vec3_x,tolua_set_glm__vec3_x);
    tolua_variable(tolua_S,"y",tolua_get_glm__vec3_y,tolua_set_glm__vec3_y);
    tolua_variable(tolua_S,"z",tolua_get_glm__vec3_z,tolua_set_glm__vec3_z);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec3_new00);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec3_new00_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec3_new00_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec3_new01);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec3_new01_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec3_new01_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec3_new02);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec3_new02_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec3_new02_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec3_new03);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec3_new03_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec3_new03_local);
    tolua_function(tolua_S,"new",tolua_vec3_glm_vec3_new04);
    tolua_function(tolua_S,"new_local",tolua_vec3_glm_vec3_new04_local);
    tolua_function(tolua_S,".call",tolua_vec3_glm_vec3_new04_local);
    tolua_function(tolua_S,"length",tolua_vec3_glm_vec3_length00);
    tolua_function(tolua_S,".add",tolua_vec3_glm_vec3__add00);
    tolua_function(tolua_S,".sub",tolua_vec3_glm_vec3__sub00);
    tolua_function(tolua_S,".mul",tolua_vec3_glm_vec3__mul00);
    tolua_function(tolua_S,".div",tolua_vec3_glm_vec3__div00);
    tolua_function(tolua_S,".add",tolua_vec3_glm_vec3__add01);
    tolua_function(tolua_S,".sub",tolua_vec3_glm_vec3__sub01);
    tolua_function(tolua_S,".mul",tolua_vec3_glm_vec3__mul01);
    tolua_function(tolua_S,".div",tolua_vec3_glm_vec3__div01);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_vec3 (lua_State* tolua_S) {
 return tolua_vec3_open(tolua_S);
};
#endif

