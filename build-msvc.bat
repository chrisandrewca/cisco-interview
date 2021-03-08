
cls

REM verify the script is being run from the base directory
if "%cd%" neq "C:\codez\cisco-interview" (

	REM please run this script from the base directory
	exit
)

if not exist ".\bin" (
	mkdir "bin"
)

cd bin

call "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Auxiliary\Build\vcvars64.bat"

cl ^
	/Wall ^
	/I ..\include ^
	/DWIN32_LEAN_AND_MEAN ^
	..\main.cpp ^
	..\webpage.cpp ^
	/link ^
	Ws2_32.lib ^
	Mswsock.lib ^
	AdvApi32.lib ^
	/out:ciscotest.exe

cd ..

REM TODO check for errors above
REM echo:
REM echo %errorlevel%

echo:
.\bin\ciscotest.exe