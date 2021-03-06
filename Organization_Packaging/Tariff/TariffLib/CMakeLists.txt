add_subdirectory(src)
set(LIB_SOURCES)
set(LIB_INCLUDE_DIRS)

#include dependent component "include" directory
include_directories(${LOCAL_REPO_ROOT}/include) # use to include dependencies headers

# link directories for dependencies
link_directories(${LOCAL_REPO_ROOT}/lib)

# run the child CMakeList
include(src/CMakeLists.txt)

# Get List of libs to link this with
if(WIN32)
    file(GLOB LIB_DEPENDENCIES "${LOCAL_REPO_ROOT}/lib/*.lib") # Can change later to only link to certain libraries
else(WIN32)
    file(GLOB LIB_DEPENDENCIES ${LOCAL_REPO_ROOT}/lib/*) 
endif(WIN32)


#message(STATUS "Lib Sources " ${LIB_NAME} " : " ${LIB_SOURCES} )
#message(STATUS "Lib Include " ${LIB_NAME} " : " ${LIB_INCLUDE_DIRS} )
#message(STATUS "Lib Dependencies" ${LIB_DEPENDENCIES} )

# provide version.rc (only for windows)
if(WIN32)
    add_library(${LIB_NAME} SHARED ${LIB_SOURCES} 
                    ${PROJECT_SOURCE_DIR}/version.rc)
else(WIN32)
    add_library(${LIB_NAME} SHARED ${LIB_SOURCES} )
endif(WIN32)

set_target_properties(${LIB_NAME} PROPERTIES PREFIX "")
set_target_properties(${LIB_NAME} PROPERTIES VERSION "${LIB_VERSION}")
set_target_properties(${LIB_NAME} PROPERTIES OUTPUT_NAME "${LIB_NAME}")
if(WIN32)
    set_target_properties(${LIB_NAME} PROPERTIES SUFFIX ".dll")
else(WIN32)
    set_target_properties(${LIB_NAME} PROPERTIES SUFFIX ".so")
endif(WIN32)

# add private include directories for private headers (to build this library)
foreach(dir ${LIB_INCLUDE_DIRS})
    target_include_directories(${LIB_NAME} PRIVATE ${dir})
endforeach(dir ${LIB_INCLUDE_DIRS})

# add public include directories for public headers (to be used by this library and its clients)
target_include_directories(${LIB_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

target_link_libraries(${LIB_NAME} ${LIB_DEPENDENCIES}) 

message(STATUS "INSTALL ROOT DIR " ${INSTALL_ROOT_DIR})

install(TARGETS ${LIB_NAME} 
        RUNTIME DESTINATION ${INSTALL_ROOT_DIR}/bin
        ARCHIVE DESTINATION ${INSTALL_ROOT_DIR}/lib
        LIBRARY DESTINATION ${INSTALL_ROOT_DIR}/lib
        )

message(STATUS "Include Directories " ${INCLUDE_DIRECTORIES})
message(STATUS "Interface Include Directories " ${INTERFACE_INCLUDE_DIRECTORIES})

INSTALL( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ 
            DESTINATION ${INSTALL_ROOT_DIR}/include
            FILES_MATCHING
            PATTERN "*.h")

