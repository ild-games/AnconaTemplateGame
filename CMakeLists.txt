{{=<% %>=}}

cmake_minimum_required(VERSION 2.8)

project(<% gameName %>)

include (${RAFT})

if(RAFT_IS_ANDROID)
    set(GAME_SRC Src/<% gameName %>GAME_NAME!$/Platforms/Android/main.cpp)
endif()

if(RAFT_IS_DESKTOP)
    set(GAME_SRC Src/<% gameName %>GAME_NAME!$/Platforms/Desktop/main.cpp)
endif()

set (GAME_DEPS Ancona_Platformer Ancona_Core2D Ancona_Framework
    Ancona_Util2D Ancona_Util Ancona_System
    sfml-graphics sfml-window sfml-system jsoncpp)

add_executable(<% gameName %>)
target_link_libraries(<% gameName %> <%gameAbbr%>_Lib)
target_link_libraries(<% gameName %> ${GAME_DEPS})

if(RAFT_IS_ANDROID)
    set(AssetOutputDir ${CMAKE_BINARY_DIR}/Android/<% gameName %>GAME_NAME!$/assets)
    set(COMPILED_PRJ_SRC_DIR)
elseif(RAFT_IS_DESKTOP)
    set(AssetOutputDir ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/<% gameName %>GAME_NAME!$)
    set(COMPILED_PRJ_SRC_DIR ${CMAKE_SOURCE_DIR}/)
endif()

configure_file(Config.txt ${AssetOutputDir}/Config.txt @ONLY)
configure_file(save.dat ${AssetOutputDir}/save.dat COPYONLY)
file(COPY Maps DESTINATION ${AssetOutputDir})
