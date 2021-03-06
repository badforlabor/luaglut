/*
** Lua binding: glm
** Generated automatically by tolua++-1.0.92 on 06/22/17 16:52:45.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
extern "C"
{
	TOLUA_API int  tolua_glm_open (lua_State* tolua_S);
}

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "array.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_glm__mat4 (lua_State* tolua_S)
{
 glm::mat4* self = (glm::mat4*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_glm__vec3_array (lua_State* tolua_S)
{
 glm::vec3_array* self = (glm::vec3_array*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

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
 tolua_usertype(tolua_S,"glm::mat4");
 tolua_usertype(tolua_S,"glm::vec3_array");
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

/* function: glm::dot */
#ifndef TOLUA_DISABLE_tolua_glm_glm_dot00
static int tolua_glm_glm_dot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,1,0));
  glm::vec3 b = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  glm::dot(a,b);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::cross */
#ifndef TOLUA_DISABLE_tolua_glm_glm_cross00
static int tolua_glm_glm_cross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,1,0));
  glm::vec3 b = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::vec3 tolua_ret = (glm::vec3)  glm::cross(a,b);
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
 tolua_error(tolua_S,"#ferror in function 'cross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::normalize */
#ifndef TOLUA_DISABLE_tolua_glm_glm_normalize00
static int tolua_glm_glm_normalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3 m = *((glm::vec3*)  tolua_tousertype(tolua_S,1,0));
  {
   glm::vec3 tolua_ret = (glm::vec3)  glm::normalize(m);
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
 tolua_error(tolua_S,"#ferror in function 'normalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::rotate */
#ifndef TOLUA_DISABLE_tolua_glm_glm_rotate00
static int tolua_glm_glm_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4 tolua_var_1 = *((glm::mat4*)  tolua_tousertype(tolua_S,1,0));
  float radian = ((float)  tolua_tonumber(tolua_S,2,0));
  glm::vec3 axis = *((glm::vec3*)  tolua_tousertype(tolua_S,3,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::rotate(tolua_var_1,radian,axis);
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
 tolua_error(tolua_S,"#ferror in function 'rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::translate */
#ifndef TOLUA_DISABLE_tolua_glm_glm_translate00
static int tolua_glm_glm_translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4 tolua_var_2 = *((glm::mat4*)  tolua_tousertype(tolua_S,1,0));
  glm::vec3 v = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::translate(tolua_var_2,v);
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
 tolua_error(tolua_S,"#ferror in function 'translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::scale */
#ifndef TOLUA_DISABLE_tolua_glm_glm_scale00
static int tolua_glm_glm_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4 tolua_var_3 = *((glm::mat4*)  tolua_tousertype(tolua_S,1,0));
  glm::vec3 v = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::scale(tolua_var_3,v);
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
 tolua_error(tolua_S,"#ferror in function 'scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::perspective */
#ifndef TOLUA_DISABLE_tolua_glm_glm_perspective00
static int tolua_glm_glm_perspective00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float fov_radian = ((float)  tolua_tonumber(tolua_S,1,0));
  float aspect = ((float)  tolua_tonumber(tolua_S,2,0));
  float near = ((float)  tolua_tonumber(tolua_S,3,0));
  float far = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::perspective(fov_radian,aspect,near,far);
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
 tolua_error(tolua_S,"#ferror in function 'perspective'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::ortho */
#ifndef TOLUA_DISABLE_tolua_glm_glm_ortho00
static int tolua_glm_glm_ortho00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float left = ((float)  tolua_tonumber(tolua_S,1,0));
  float right = ((float)  tolua_tonumber(tolua_S,2,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,3,0));
  float top = ((float)  tolua_tonumber(tolua_S,4,0));
  float near = ((float)  tolua_tonumber(tolua_S,5,0));
  float far = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::ortho(left,right,bottom,top,near,far);
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
 tolua_error(tolua_S,"#ferror in function 'ortho'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::ortho */
#ifndef TOLUA_DISABLE_tolua_glm_glm_ortho01
static int tolua_glm_glm_ortho01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float left = ((float)  tolua_tonumber(tolua_S,1,0));
  float right = ((float)  tolua_tonumber(tolua_S,2,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,3,0));
  float top = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::ortho(left,right,bottom,top);
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
 return tolua_glm_glm_ortho00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::frustum */
#ifndef TOLUA_DISABLE_tolua_glm_glm_frustum00
static int tolua_glm_glm_frustum00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float left = ((float)  tolua_tonumber(tolua_S,1,0));
  float right = ((float)  tolua_tonumber(tolua_S,2,0));
  float bottom = ((float)  tolua_tonumber(tolua_S,3,0));
  float top = ((float)  tolua_tonumber(tolua_S,4,0));
  float near = ((float)  tolua_tonumber(tolua_S,5,0));
  float far = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::frustum(left,right,bottom,top,near,far);
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
 tolua_error(tolua_S,"#ferror in function 'frustum'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::lookAt */
#ifndef TOLUA_DISABLE_tolua_glm_glm_lookAt00
static int tolua_glm_glm_lookAt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3 eye = *((glm::vec3*)  tolua_tousertype(tolua_S,1,0));
  glm::vec3 target = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
  glm::vec3 up = *((glm::vec3*)  tolua_tousertype(tolua_S,3,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::lookAt(eye,target,up);
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
 tolua_error(tolua_S,"#ferror in function 'lookAt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::transpose */
#ifndef TOLUA_DISABLE_tolua_glm_glm_transpose00
static int tolua_glm_glm_transpose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4 m = *((glm::mat4*)  tolua_tousertype(tolua_S,1,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::transpose(m);
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
 tolua_error(tolua_S,"#ferror in function 'transpose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: glm::inverse */
#ifndef TOLUA_DISABLE_tolua_glm_glm_inverse00
static int tolua_glm_glm_inverse00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"glm::mat4",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::mat4 m = *((glm::mat4*)  tolua_tousertype(tolua_S,1,0));
  {
   glm::mat4 tolua_ret = (glm::mat4)  glm::inverse(m);
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
 tolua_error(tolua_S,"#ferror in function 'inverse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::vec3_array */
#ifndef TOLUA_DISABLE_tolua_glm_glm_vec3_array_new00
static int tolua_glm_glm_vec3_array_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3_array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec3_array* tolua_ret = (glm::vec3_array*)  Mtolua_new((glm::vec3_array)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3_array");
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

/* method: new_local of class  glm::vec3_array */
#ifndef TOLUA_DISABLE_tolua_glm_glm_vec3_array_new00_local
static int tolua_glm_glm_vec3_array_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::vec3_array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::vec3_array* tolua_ret = (glm::vec3_array*)  Mtolua_new((glm::vec3_array)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::vec3_array");
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

/* method: clear of class  glm::vec3_array */
#ifndef TOLUA_DISABLE_tolua_glm_glm_vec3_array_clear00
static int tolua_glm_glm_vec3_array_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3_array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3_array* self = (glm::vec3_array*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clear'", NULL);
#endif
  {
   self->clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: push_back of class  glm::vec3_array */
#ifndef TOLUA_DISABLE_tolua_glm_glm_vec3_array_push_back00
static int tolua_glm_glm_vec3_array_push_back00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3_array",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"glm::vec3",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3_array* self = (glm::vec3_array*)  tolua_tousertype(tolua_S,1,0);
  glm::vec3 a = *((glm::vec3*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'push_back'", NULL);
#endif
  {
   self->push_back(a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'push_back'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: data of class  glm::vec3_array */
#ifndef TOLUA_DISABLE_tolua_glm_glm_vec3_array_data00
static int tolua_glm_glm_vec3_array_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::vec3_array",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::vec3_array* self = (glm::vec3_array*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'data'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->data();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'data'.",&tolua_err);
 return 0;
#endif
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
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vec3","glm::vec3","",tolua_collect_glm__vec3);
   #else
   tolua_cclass(tolua_S,"vec3","glm::vec3","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vec3");
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"mat4","glm::mat4","",tolua_collect_glm__mat4);
   #else
   tolua_cclass(tolua_S,"mat4","glm::mat4","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"mat4");
   tolua_endmodule(tolua_S);
   tolua_function(tolua_S,"radians",tolua_glm_glm_radians00);
   tolua_function(tolua_S,"radians",tolua_glm_glm_radians01);
   tolua_function(tolua_S,"dot",tolua_glm_glm_dot00);
   tolua_function(tolua_S,"cross",tolua_glm_glm_cross00);
   tolua_function(tolua_S,"normalize",tolua_glm_glm_normalize00);
   tolua_function(tolua_S,"rotate",tolua_glm_glm_rotate00);
   tolua_function(tolua_S,"translate",tolua_glm_glm_translate00);
   tolua_function(tolua_S,"scale",tolua_glm_glm_scale00);
   tolua_function(tolua_S,"perspective",tolua_glm_glm_perspective00);
   tolua_function(tolua_S,"ortho",tolua_glm_glm_ortho00);
   tolua_function(tolua_S,"ortho",tolua_glm_glm_ortho01);
   tolua_function(tolua_S,"frustum",tolua_glm_glm_frustum00);
   tolua_function(tolua_S,"lookAt",tolua_glm_glm_lookAt00);
   tolua_function(tolua_S,"transpose",tolua_glm_glm_transpose00);
   tolua_function(tolua_S,"inverse",tolua_glm_glm_inverse00);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"vec3_array","glm::vec3_array","",tolua_collect_glm__vec3_array);
   #else
   tolua_cclass(tolua_S,"vec3_array","glm::vec3_array","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"vec3_array");
    tolua_function(tolua_S,"new",tolua_glm_glm_vec3_array_new00);
    tolua_function(tolua_S,"new_local",tolua_glm_glm_vec3_array_new00_local);
    tolua_function(tolua_S,".call",tolua_glm_glm_vec3_array_new00_local);
    tolua_function(tolua_S,"clear",tolua_glm_glm_vec3_array_clear00);
    tolua_function(tolua_S,"push_back",tolua_glm_glm_vec3_array_push_back00);
    tolua_function(tolua_S,"data",tolua_glm_glm_vec3_array_data00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_glm (lua_State* tolua_S) {
 return tolua_glm_open(tolua_S);
};
#endif

