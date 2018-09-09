cmake_minimum_required(VERSION 2.8.9)
project(studentStaticLib)

# include nheaders
include_directories(include)

# include srcs
file(GLOB SOURCES "src/*.cpp")

add_library(studentStaticLib STATIC ${SOURCES})

install(TARGETS studentStaticLib DESTINATION /usr/lib)