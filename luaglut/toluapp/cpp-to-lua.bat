set classfile=glm
set proj=luaglm

toluapp.exe %classfile%.pkg > %classfile%.cpp
copy /y %classfile%.cpp ..\%proj%\