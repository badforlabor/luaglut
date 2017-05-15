/*
** Lua binding: tclass
** Generated automatically by tolua++-1.0.92 on 05/15/17 17:42:16.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_tclass_open (lua_State* tolua_S);

#include "tclass.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_glm__CNumber (lua_State* tolua_S)
{
 glm::CNumber* self = (glm::CNumber*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_glm__CMessage (lua_State* tolua_S)
{
 glm::CMessage* self = (glm::CMessage*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"glm::CNumber");
 tolua_usertype(tolua_S,"glm::CMessage");
}

/* method: new of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_new00
static int tolua_tclass_glm_CNumber_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::CNumber* tolua_ret = (glm::CNumber*)  Mtolua_new((glm::CNumber)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::CNumber");
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

/* method: new_local of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_new00_local
static int tolua_tclass_glm_CNumber_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::CNumber* tolua_ret = (glm::CNumber*)  Mtolua_new((glm::CNumber)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::CNumber");
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

/* method: new of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_new01
static int tolua_tclass_glm_CNumber_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   glm::CNumber* tolua_ret = (glm::CNumber*)  Mtolua_new((glm::CNumber)(num));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::CNumber");
  }
 }
 return 1;
tolua_lerror:
 return tolua_tclass_glm_CNumber_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_new01_local
static int tolua_tclass_glm_CNumber_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   glm::CNumber* tolua_ret = (glm::CNumber*)  Mtolua_new((glm::CNumber)(num));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::CNumber");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_tclass_glm_CNumber_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_delete00
static int tolua_tclass_glm_CNumber_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CNumber* self = (glm::CNumber*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetNumber of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_SetNumber00
static int tolua_tclass_glm_CNumber_SetNumber00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CNumber* self = (glm::CNumber*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetNumber'", NULL);
#endif
  {
   self->SetNumber(num);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetNumber'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetNumber of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_GetNumber00
static int tolua_tclass_glm_CNumber_GetNumber00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CNumber* self = (glm::CNumber*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetNumber'", NULL);
#endif
  {
   int tolua_ret = (int)  self->GetNumber();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetNumber'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: Add of class  glm::CNumber */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CNumber_Add00
static int tolua_tclass_glm_CNumber_Add00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CNumber",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CNumber* self = (glm::CNumber*)  tolua_tousertype(tolua_S,1,0);
  int num = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'Add'", NULL);
#endif
  {
   int tolua_ret = (int)  self->Add(num);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'Add'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  glm::CMessage */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CMessage_new00
static int tolua_tclass_glm_CMessage_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::CMessage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::CMessage* tolua_ret = (glm::CMessage*)  Mtolua_new((glm::CMessage)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::CMessage");
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

/* method: new_local of class  glm::CMessage */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CMessage_new00_local
static int tolua_tclass_glm_CMessage_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"glm::CMessage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   glm::CMessage* tolua_ret = (glm::CMessage*)  Mtolua_new((glm::CMessage)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"glm::CMessage");
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

/* method: delete of class  glm::CMessage */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CMessage_delete00
static int tolua_tclass_glm_CMessage_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CMessage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CMessage* self = (glm::CMessage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: SetMessage of class  glm::CMessage */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CMessage_SetMessage00
static int tolua_tclass_glm_CMessage_SetMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CMessage",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CMessage* self = (glm::CMessage*)  tolua_tousertype(tolua_S,1,0);
  char* msg = ((char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'SetMessage'", NULL);
#endif
  {
   self->SetMessage(msg);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'SetMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetMessage of class  glm::CMessage */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CMessage_GetMessage00
static int tolua_tclass_glm_CMessage_GetMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CMessage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CMessage* self = (glm::CMessage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'GetMessage'", NULL);
#endif
  {
   char* tolua_ret = (char*)  self->GetMessage();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ShowMessage of class  glm::CMessage */
#ifndef TOLUA_DISABLE_tolua_tclass_glm_CMessage_ShowMessage00
static int tolua_tclass_glm_CMessage_ShowMessage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"glm::CMessage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  glm::CMessage* self = (glm::CMessage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ShowMessage'", NULL);
#endif
  {
   self->ShowMessage();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ShowMessage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_tclass_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_module(tolua_S,"glm",0);
  tolua_beginmodule(tolua_S,"glm");
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CNumber","glm::CNumber","",tolua_collect_glm__CNumber);
   #else
   tolua_cclass(tolua_S,"CNumber","glm::CNumber","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CNumber");
    tolua_function(tolua_S,"new",tolua_tclass_glm_CNumber_new00);
    tolua_function(tolua_S,"new_local",tolua_tclass_glm_CNumber_new00_local);
    tolua_function(tolua_S,".call",tolua_tclass_glm_CNumber_new00_local);
    tolua_function(tolua_S,"new",tolua_tclass_glm_CNumber_new01);
    tolua_function(tolua_S,"new_local",tolua_tclass_glm_CNumber_new01_local);
    tolua_function(tolua_S,".call",tolua_tclass_glm_CNumber_new01_local);
    tolua_function(tolua_S,"delete",tolua_tclass_glm_CNumber_delete00);
    tolua_function(tolua_S,"SetNumber",tolua_tclass_glm_CNumber_SetNumber00);
    tolua_function(tolua_S,"GetNumber",tolua_tclass_glm_CNumber_GetNumber00);
    tolua_function(tolua_S,"Add",tolua_tclass_glm_CNumber_Add00);
   tolua_endmodule(tolua_S);
   #ifdef __cplusplus
   tolua_cclass(tolua_S,"CMessage","glm::CMessage","",tolua_collect_glm__CMessage);
   #else
   tolua_cclass(tolua_S,"CMessage","glm::CMessage","",NULL);
   #endif
   tolua_beginmodule(tolua_S,"CMessage");
    tolua_function(tolua_S,"new",tolua_tclass_glm_CMessage_new00);
    tolua_function(tolua_S,"new_local",tolua_tclass_glm_CMessage_new00_local);
    tolua_function(tolua_S,".call",tolua_tclass_glm_CMessage_new00_local);
    tolua_function(tolua_S,"delete",tolua_tclass_glm_CMessage_delete00);
    tolua_function(tolua_S,"SetMessage",tolua_tclass_glm_CMessage_SetMessage00);
    tolua_function(tolua_S,"GetMessage",tolua_tclass_glm_CMessage_GetMessage00);
    tolua_function(tolua_S,"ShowMessage",tolua_tclass_glm_CMessage_ShowMessage00);
   tolua_endmodule(tolua_S);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_tclass (lua_State* tolua_S) {
 return tolua_tclass_open(tolua_S);
};
#endif

