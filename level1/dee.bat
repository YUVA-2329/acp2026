@echo off

REM Create gdb folder if not exists
if not exist gdb mkdir gdb

echo Compiling and generating GDB reports...

for /L %%i in (1,1,10) do (
    echo -------------------------
    echo Processing assign%%i.c

    gcc assign%%i.c -g -o assign%%i.exe

    echo Running GDB for assign%%i.exe

    gdb assign%%i.exe -ex "break main" -ex "run" -ex "bt" -ex "quit" > gdb\assign%%i.txt
)

echo.
echo ✅ All GDB files created in 'gdb' folder
pause