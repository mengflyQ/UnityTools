1. 使用 CLion 编译 lua 的 Lua链接库， Lua解释器， Lua编译器；
2. 编译好放入bin目录
3. 使用 
```
luac -o 输出的文件 原生的文件(需要转成bytecode的文件)
```
4. 将此路径放入环境变量，直接执行luac输出的文件即可测试正常
```
lua
dofile("t.lua")
# 输出正常即可使用 
```
5. 打开VS ，打开 工具-->命令行-->开发者(powershell)，进入到 LuaJIT-2.1.0-beta3\src\ 路径中，执行msvcbuild.bat，自动输出了 luajit.exe luajit.lib minilua.lib lua51.lib lua51.dll 
6. 直接调用luajit –b source_file out_file (一般都是lua后缀，代码不用改动)