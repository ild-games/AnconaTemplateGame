{{=<% %>=}}

file(GLOB_RECURSE <%gameAbbr%>_Lib_Code *.cpp)
file(GLOB_RECURSE <%gameAbbr%>_Lib_Headers *.hpp)

add_library(<%gameAbbr%>_Lib ${<%gameAbbr%>_Lib_Code} ${<%gameAbbr%>_Lib_Headers})
