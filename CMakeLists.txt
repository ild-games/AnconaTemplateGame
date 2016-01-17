{{=<% %>=}}

cmake_minimum_required(VERSION 2.8)

project(<% gameName %>)

include (${RAFT})

if(RAFT_IS_ANDROID)
    set(GAME_SRC Src/<% gameName %>/Platforms/Android/main.cpp)
endif()

if(RAFT_IS_DESKTOP)
    set(GAME_SRC Src/<% gameName %>/Platforms/Desktop/main.cpp)
endif()

#Set C++ Version to 11
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall")

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" AND NOT ANDROID)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
endif()

set (GAME_DEPS Ancona_Platformer Ancona_Core2D Ancona_Framework
    Ancona_Util2D Ancona_Util Ancona_System
    sfml-graphics sfml-window sfml-system jsoncpp)

add_subdirectory(Src/<% gameName %>/<% gameAbbr %>Lib)

add_executable(<% gameName %> ${GAME_SRC})
target_link_libraries(<% gameName %> <%gameAbbr%>_Lib)
target_link_libraries(<% gameName %> ${GAME_DEPS})

if(RAFT_IS_ANDROID)
    set(AssetOutputDir ${CMAKE_BINARY_DIR}/Android/<% gameName %>/assets)
elseif(RAFT_IS_DESKTOP)
    set(AssetOutputDir ${CMAKE_BINARY_DIR}/)
endif()

configure_file(Config.txt ${AssetOutputDir}/Config.txt COPYONLY)
