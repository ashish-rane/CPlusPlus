cmake_minimum_required(VERSION 2.8.9)
project(studentLib)
set(CMAKE_BUILD_TYPE Release)

#Bring the headers in  the project
include_directories(include)

file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(studentLib SHARED ${SOURCES})

# Set the location of the installation -- i.e /usr/lib in this case
# not really necessary in this example, Use 'sudo make install' to apply
#install(TARGETS studentLib DESTINATION /usr/lib)
