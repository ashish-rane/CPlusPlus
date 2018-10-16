file(GLOB_RECURSE SRC ${CMAKE_CURRENT_LIST_DIR}/*.cxx)
message(STATUS ${SRC})
set(LIB_SOURCES ${LIB_SOURCES} ${SRC})
set(LIB_INCLUDE_DIRS ${LIB_INCLUDE_DIRS} ${CMAKE_CURRENT_LIST_DIR}) # append new sub directories here 

message(STATUS "Lib Sources : " ${LIB_SOURCES})
message(STATUS "Lib include Dirs :" ${LIB_INCLUDE_DIRS})