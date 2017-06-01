set classfile=mat4
set proj=luaglm

toluapp.exe %classfile%.pkg > %classfile%.cpp
copy /y %classfile%.cpp ..\%proj%\