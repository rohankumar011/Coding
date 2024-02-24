@echo off
raj.exe
@if%ERRORLEVEL%==0 goto SUCCESS
@echo "UNSUCCESSFULL"
notepad.exe
goto END
:SUCCESS 
@echo "SUCCESSFULL"
calc.exe
:END