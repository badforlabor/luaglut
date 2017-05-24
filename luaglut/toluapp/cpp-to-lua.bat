set classfile=mesh
set proj=luamesh

toluapp.exe %classfile%.pkg > %classfile%.cpp
copy /y %classfile%.cpp ..\%proj%\