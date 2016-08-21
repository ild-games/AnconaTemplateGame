{{=<% %>=}}

cmake_minimum_required(VERSION 2.8)

project(<% gameName %>)

include (${RAFT})

#Set C++ Version to 11
if(WIN32)
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
else()
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wall")
endif()

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU" AND NOT ANDROID)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
endif()

set (GAME_DEPS

    Ancona_Platformer
    Ancona_Core2D
    Ancona_Framework
    Ancona_Util2D
    Ancona_Util
    Ancona_System

    sfml-graphics-d
    sfml-window-d
    sfml-system-d

    jsoncpp)

add_subdirectory(Src/<% gameName %>/<% gameAbbr %>Lib)

if(RAFT_IS_ANDROID)
    set(AssetOutputDir ${CMAKE_BINARY_DIR}/Android/<% gameName %>/assets)
    set(GAME_SRC Src/<% gameName %>/Platforms/Android/main.cpp)
    set(GAME_DEPS ${GAME_DEPS} sfml-main-d EGL android log)

    add_library(<% gameName %> SHARED ${GAME_SRC})
elseif(RAFT_IS_DESKTOP)
    set(AssetOutputDir ${CMAKE_BINARY_DIR}/)
    set(GAME_SRC Src/<% gameName %>/Platforms/Desktop/main.cpp)
	if(WIN32)
	    add_executable(<% gameName %> WIN32 ${GAME_SRC})
	else()
	    add_executable(<% gameName %> ${GAME_SRC})
	endif()
endif()

target_link_libraries(<% gameName %> <%gameAbbr%>_Lib)
target_link_libraries(<% gameName %> ${GAME_DEPS})

configure_file(Config.txt ${AssetOutputDir}/Config.txt)
configure_file(save.dat ${AssetOutputDir}/save.dat COPYONLY)
file(COPY Maps/ DESTINATION ${AssetOutputDir}/Maps/)
