cmake_minimum_required(VERSION 2.8.9)
project(hello)

#Bring the headers such as student.h into the project
include_directories(include)

# can manually add the sources using the set command
#set(SOURCES src/main.cpp src/Student.cpp)

#However the file(GLOB) allows wildcards
file(GLOB SOURCES "src/*.cpp")

add_executable(hello ${SOURCES})
