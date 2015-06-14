file(GLOB_RECURSE $!GAME_ABBR!$_Lib_Code *.cpp)
file(GLOB_RECURSE $!GAME_ABBR!$_Lib_Headers *.hpp)

add_library($!GAME_ABBR!$_Lib ${$!GAME_ABBR!$_Lib_Code} ${$!GAME_ABBR!$_Lib_Headers})
