set classfile=glm

toluapp.exe %classfile%.pkg > %classfile%.cpp
copy /y %classfile%.cpp ..\luaglm\