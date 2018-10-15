add_subdirectory(src)
set(LIB_SOURCES)
set(LIB_INCLUDE_DIRS)

include(src/CMakeLists.txt)

add_library(TodoListLib SHARED ${LIB_SOURCES} )
target_include_directories(TodoListLib ${LIB_INCLUDE_DIRS})