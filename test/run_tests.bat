@echo off
echo Compiling sol.cpp...
g++ sol.cpp -o sol.exe
if %errorlevel% neq 0 (
    echo [ERROR] Failed to compile sol.cpp
    exit /b %errorlevel%
)

echo.
echo Compiling golden.cpp...
g++ golden.cpp -o golden.exe
if %errorlevel% neq 0 (
    echo [ERROR] Failed to compile golden.cpp
    exit /b %errorlevel%
)

echo.
echo Running test for input\input.txt...
sol.exe < input\input.txt > output\output.txt

echo.
for %%f in (input\input_*.txt) do (
    for /F "tokens=2 delims=_" %%n in ("%%~nf") do (
        echo Running tests for %%f...
        sol.exe < %%f > output\output_%%n.txt
        golden.exe < %%f > output\golden_%%n.txt
        call check.bat output\output_%%n.txt output\golden_%%n.txt check\check_%%n.txt
        echo.
    )
)

echo.
echo All tests completed. Please review the generated check\check_*.txt files.
