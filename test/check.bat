@echo off
set "OUT=%~1"
set "GLD=%~2"
set "CHK=%~3"
if "%OUT%"=="" set "OUT=output\output.txt"
if "%GLD%"=="" set "GLD=output\golden.txt"
if "%CHK%"=="" set "CHK=check\check.txt"

echo Comparing %OUT% and %GLD%... > "%CHK%"

fc "%OUT%" "%GLD%" > nul
if %errorlevel% neq 0 (
    echo. >> "%CHK%"
    echo [FAIL] Differences found between the outputs! Here are the mismatched lines: >> "%CHK%"
    fc "%OUT%" "%GLD%" >> "%CHK%"
) else (
    echo. >> "%CHK%"
    echo [SUCCESS] %OUT% matches %GLD% perfectly! >> "%CHK%"
)
echo Check complete. Results saved to "%CHK%".
