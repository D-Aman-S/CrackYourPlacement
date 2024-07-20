@echo off
setlocal

:: Check if the folder name is provided
if "%1"=="" (
    echo Please provide a folder name.
    exit /b 1
)

:: Set the folder name and optional directory path
set "FOLDER_NAME=%1"
if "%2"=="" (
    set "DIR_PATH=."
) else (
    set "DIR_PATH=%2"
)

set "TARGET_PATH=%DIR_PATH%\%FOLDER_NAME%"
set "CPP_FILE=%TARGET_PATH%\%FOLDER_NAME%.cpp"
set "README_FILE=%TARGET_PATH%\readme.md"
set "SKELETON_FILE=skeleton.cpp"

:: Create the folder
mkdir "%TARGET_PATH%"

:: Create the .cpp file with the skeletal structure
if exist "%SKELETON_FILE%" (
    copy "%SKELETON_FILE%" "%CPP_FILE%"
) else (
    echo Skeleton file not found.
    exit /b 1
)

:: Create the readme.md file
echo # %FOLDER_NAME%> "%README_FILE%"

echo Project structure created successfully at %TARGET_PATH%.

endlocal
exit /b 0
