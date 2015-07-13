set(PrototypeGameLib $!GAME_ABBR!$_Lib)
set(PrototypeName $!GAME_NAME!$)

add_subdirectory(Src/$!GAME_NAME!$/$!GAME_ABBR!$Lib)

if(ANDROID)
    set($!GAME_ABBR!$Src Src/$!GAME_NAME!$/Platforms/Android/main.cpp)
endif(ANDROID)

if(DESKTOP)
    set($!GAME_ABBR!$Src Src/$!GAME_NAME!$/Platforms/Desktop/main.cpp)
endif(DESKTOP)

ancona_add_target($!GAME_NAME!$ LINK_SFML
    SRC ${$!GAME_ABBR!$Src}
    LIBS $!GAME_ABBR!$_Lib ${ANCONA_LIBS} ${ANCONA_EXT_LIBS}
    WHOLE_STATIC_LIBS ${ANCONA_WHOLE_EXT_LIBS}
    PLATFORMS ANDROID DESKTOP
    INCLUDES ${CMAKE_CURRENT_LIST_DIR}/Src)

if(ANDROID)
    set(AssetOutputDir ${CMAKE_BINARY_DIR}/Android/$!GAME_NAME!$/assets)
    set(COMPILED_PRJ_SRC_DIR)
elseif(DESKTOP)
    set(AssetOutputDir ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/$!GAME_NAME!$)
    set(COMPILED_PRJ_SRC_DIR ${CMAKE_SOURCE_DIR}/)
endif()

configure_file(Config.txt ${AssetOutputDir}/Config.txt @ONLY)
configure_file(save.dat ${AssetOutputDir}/save.dat COPYONLY)
file(COPY Maps DESTINATION ${AssetOutputDir})
