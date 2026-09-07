@echo off
setlocal

REM Check if an index was provided
if "%~1"=="" (
    echo Please provide an index for the new folder.
    echo Usage: %~n0 ^<index^>
    exit /b 1
)

set "INDEX=%~1"

REM Check if the directory already exists
if exist "%INDEX%" (
    echo Folder "%INDEX%" already exists.
    exit /b 1
)

echo Creating folder: "%INDEX%"
mkdir "%INDEX%"

if errorlevel 1 (
    echo Failed to create directory.
    exit /b 1
)

echo.
echo Creating subfolders...
mkdir "%INDEX%\input"
mkdir "%INDEX%\output"
mkdir "%INDEX%\check"

echo.
echo Creating files in input folder...
type NUL > "%INDEX%\input\input.txt"
type NUL > "%INDEX%\input\input_1.txt"
type NUL > "%INDEX%\input\input_2.txt"

echo.
echo Creating files in output folder...
type NUL > "%INDEX%\output\output.txt"
type NUL > "%INDEX%\output\output_1.txt"
type NUL > "%INDEX%\output\output_2.txt"
type NUL > "%INDEX%\output\golden_1.txt"
type NUL > "%INDEX%\output\golden_2.txt"

echo.
echo Creating files in check folder...
type NUL > "%INDEX%\check\check_1.txt"
type NUL > "%INDEX%\check\check_2.txt"

echo.
REM Create the files
echo Creating file: "sol.cpp"
type NUL > "%INDEX%\sol.cpp"

echo.
echo Creating file: "CoT.cpp"
type NUL > "%INDEX%\CoT.cpp"

echo.
echo Creating file: "golden.cpp"
type NUL > "%INDEX%\golden.cpp"

echo.
echo Creating file: "check.bat"
echo @echo off> "%INDEX%\check.bat"
echo set "OUT=%%~1">> "%INDEX%\check.bat"
echo set "GLD=%%~2">> "%INDEX%\check.bat"
echo set "CHK=%%~3">> "%INDEX%\check.bat"
echo if "%%OUT%%"=="" set "OUT=output\output.txt">> "%INDEX%\check.bat"
echo if "%%GLD%%"=="" set "GLD=output\golden.txt">> "%INDEX%\check.bat"
echo if "%%CHK%%"=="" set "CHK=check\check.txt">> "%INDEX%\check.bat"
echo.>> "%INDEX%\check.bat"
echo echo Comparing %%OUT%% and %%GLD%%... ^> "%%CHK%%">> "%INDEX%\check.bat"
echo.>> "%INDEX%\check.bat"
echo fc "%%OUT%%" "%%GLD%%" ^> nul>> "%INDEX%\check.bat"
echo if %%errorlevel%% neq 0 ^(>> "%INDEX%\check.bat"
echo     echo. ^>^> "%%CHK%%">> "%INDEX%\check.bat"
echo     echo [FAIL] Differences found between the outputs! Here are the mismatched lines: ^>^> "%%CHK%%">> "%INDEX%\check.bat"
echo     fc "%%OUT%%" "%%GLD%%" ^>^> "%%CHK%%">> "%INDEX%\check.bat"
echo ^) else ^(>> "%INDEX%\check.bat"
echo     echo. ^>^> "%%CHK%%">> "%INDEX%\check.bat"
echo     echo [SUCCESS] %%OUT%% matches %%GLD%% perfectly! ^>^> "%%CHK%%">> "%INDEX%\check.bat"
echo ^)>> "%INDEX%\check.bat"
echo echo Check complete. Results saved to "%%CHK%%".>> "%INDEX%\check.bat"

echo.
echo Creating file: "run_tests.bat"
echo @echo off> "%INDEX%\run_tests.bat"
echo echo Compiling sol.cpp...>> "%INDEX%\run_tests.bat"
echo g++ sol.cpp -o sol.exe>> "%INDEX%\run_tests.bat"
echo if %%errorlevel%% neq 0 ^(>> "%INDEX%\run_tests.bat"
echo     echo [ERROR] Failed to compile sol.cpp>> "%INDEX%\run_tests.bat"
echo     exit /b %%errorlevel%%>> "%INDEX%\run_tests.bat"
echo ^)>> "%INDEX%\run_tests.bat"
echo.>> "%INDEX%\run_tests.bat"
echo echo.>> "%INDEX%\run_tests.bat"
echo echo Compiling golden.cpp...>> "%INDEX%\run_tests.bat"
echo g++ golden.cpp -o golden.exe>> "%INDEX%\run_tests.bat"
echo if %%errorlevel%% neq 0 ^(>> "%INDEX%\run_tests.bat"
echo     echo [ERROR] Failed to compile golden.cpp>> "%INDEX%\run_tests.bat"
echo     exit /b %%errorlevel%%>> "%INDEX%\run_tests.bat"
echo ^)>> "%INDEX%\run_tests.bat"
echo.>> "%INDEX%\run_tests.bat"
echo echo.>> "%INDEX%\run_tests.bat"
echo echo Running test for input\input.txt...>> "%INDEX%\run_tests.bat"
echo sol.exe ^< input\input.txt ^> output\output.txt>> "%INDEX%\run_tests.bat"
echo.>> "%INDEX%\run_tests.bat"
echo echo.>> "%INDEX%\run_tests.bat"
echo for %%%%f in ^(input\input_*.txt^) do ^(>> "%INDEX%\run_tests.bat"
echo     for /F "tokens=2 delims=_" %%%%n in ^("%%%%~nf"^) do ^(>> "%INDEX%\run_tests.bat"
echo         echo Running tests for %%%%f...>> "%INDEX%\run_tests.bat"
echo         sol.exe ^< %%%%f ^> output\output_%%%%n.txt>> "%INDEX%\run_tests.bat"
echo         golden.exe ^< %%%%f ^> output\golden_%%%%n.txt>> "%INDEX%\run_tests.bat"
echo         call check.bat output\output_%%%%n.txt output\golden_%%%%n.txt check\check_%%%%n.txt>> "%INDEX%\run_tests.bat"
echo         echo.>> "%INDEX%\run_tests.bat"
echo     ^)>> "%INDEX%\run_tests.bat"
echo ^)>> "%INDEX%\run_tests.bat"
echo.>> "%INDEX%\run_tests.bat"
echo echo.>> "%INDEX%\run_tests.bat"
echo echo All tests completed. Please review the generated check\check_*.txt files.>> "%INDEX%\run_tests.bat"

echo.
echo Successfully created folder "%INDEX%" with starter files.

endlocal
