cmake_minimum_required(VERSION 2.8)
project(TodoListWS)

set (LOCAL_REPO_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/local_repo)

message(STATUS "Local Repo Root Set: " ${LOCAL_REPO_ROOT})

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

message(STATUS "ARCHIVE OUTPUT DIR Set: " ${LOCAL_REPO_ROOT})
message(STATUS "LIB OUTPUT DIR Set: " ${LOCAL_REPO_ROOT})
message(STATUS "RUNTIME OUTPUT DIR Set: " ${LOCAL_REPO_ROOT})



# Add subdirectories for projects
add_subdirectory(TodoListLib)
add_subdirectory(TodoListClient)

