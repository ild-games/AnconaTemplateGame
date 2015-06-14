set(PrototypeGameLib $!GAME_NAME!$_Lib)
set(PrototypeName $!GAME_NAME!$)

add_subdirectory(Src/$!GAME_NAME!$/$!GAME_NAME!$Lib)

if(ANDROID)
    set($!GAME_NAME!$Src Src/$!GAME_NAME!$/Platforms/Android/main.cpp)
endif(ANDROID)

if(DESKTOP)
    set($!GAME_NAME!$Src Src/$!GAME_NAME!$/Platforms/Desktop/main.cpp)
endif(DESKTOP)

ancona_add_target($!GAME_NAME!$ LINK_SFML
    SRC ${$!GAME_NAME!$Src}
    STATIC_LIBS $!GAME_NAME!$_Lib ${Ancona_Libs}
    PLATFORMS ANDROID DESKTOP
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/$!GAME_NAME!$Lib)

configure_file(Config.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$!GAME_NAME!$/Config.txt @ONLY)
configure_file(save.dat ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$!GAME_NAME!$/save.dat COPYONLY)
file(COPY Maps DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$!GAME_NAME!$)
