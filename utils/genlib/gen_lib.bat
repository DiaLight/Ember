@echo off

call "D:\Program Files\Visual Studio Community\2022\VC\Auxiliary\Build\vcvars32.bat"

lib /def:"%1" /out:"%2" /machine:x86
