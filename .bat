@echo off
echo Compiling main.cpp...
g++ main.cpp -o SortAndSearchAssignment.exe

if %errorlevel% neq 0 (
    echo Compilation failed!
    pause
    exit /b
)

echo Running program...
SortAndSearchAssignment.exe
pause
