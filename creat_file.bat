@echo off

set "path=C:\Users\carl\Documents\proggramtoin\c++\Homework"

for /f "delims=" %%f in (file_name.txt) do (
    type nul > "%path%\%%f"
)

echo ✅ تم إنشاء جميع الملفات في: %path%
pause
