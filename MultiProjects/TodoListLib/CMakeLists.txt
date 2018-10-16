add_subdirectory(src)
set(LIB_SOURCES)
set(LIB_INCLUDE_DIRS)
set(LIB_NAME TodoListLib)

include_directories(${LOCAL_REPO_ROOT}/include) # use to include dependencies headers
link_directories(${LOCAL_REPO_ROOT}/lib)

include(src/CMakeLists.txt)

if(WIN32)
    file(GLOB LIB_DEPENDENCIES "${LOCAL_REPO_ROOT}/lib/*.lib") # Can change later to only link to certain libraries
else(WIN32)
    file(GLOB LIB_DEPENDENCIES ${LOCAL_REPO_ROOT}/lib/*) 
endif(WIN32)


message(STATUS "Lib Sources " ${LIB_NAME} " : " ${LIB_SOURCES} )
message(STATUS "Lib Include " ${LIB_NAME} " : " ${LIB_INCLUDE_DIRS} )
message(STATUS "Lib Dependencies" ${LIB_DEPENDENCIES} )

add_library(${LIB_NAME} SHARED ${LIB_SOURCES} )
set_target_properties(${LIB_NAME} PROPERTIES PREFIX "")
set_target_properties(${LIB_NAME} PROPERTIES OUTPUT_NAME "${LIB_NAME}")
if(WIN32)
    set_target_properties(${LIB_NAME} PROPERTIES SUFFIX ".dll")
else(WIN32)
    set_target_properties(${LIB_NAME} PROPERTIES SUFFIX ".so")
endif(WIN32)

foreach(dir ${LIB_INCLUDE_DIRS})
    target_include_directories(${LIB_NAME} PUBLIC ${dir})
endforeach(dir ${LIB_INCLUDE_DIRS})

target_link_libraries(${LIB_NAME} ${LIB_DEPENDENCIES}) 
