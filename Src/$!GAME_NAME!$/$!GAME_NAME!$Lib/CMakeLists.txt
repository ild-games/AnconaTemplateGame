file(GLOB_RECURSE $!GAME_NAME!$_Lib_Code *.cpp)
file(GLOB_RECURSE $!GAME_NAME!$_Lib_Headers *.hpp)

add_library($!GAME_NAME!$_Lib ${$!GAME_NAME!$_Lib_Code} ${$!GAME_NAME!$_Lib_Headers})
