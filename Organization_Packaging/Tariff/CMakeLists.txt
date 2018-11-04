cmake_minimum_required(VERSION 2.8)
project(TariffWS)

# set local repository directory and target installation dir
set (LOCAL_REPO_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/local_repo)

message(STATUS "Local Repo Root Set: " ${LOCAL_REPO_ROOT})

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

#message(STATUS "ARCHIVE OUTPUT DIR Set: " ${LOCAL_REPO_ROOT})
#message(STATUS "LIB OUTPUT DIR Set: " ${LOCAL_REPO_ROOT})
#message(STATUS "RUNTIME OUTPUT DIR Set: " ${LOCAL_REPO_ROOT})

# set libary name
set(LIB_NAME TariffLib)
set(TESTCLIENT TariffClient)
set(COMPONENT_NAME Tariff)

#version : from file
file(STRINGS "version.txt" LIB_VERSION)
#Parse Lib Version to create PRODUCT_NUMBER,PRODUCT_VER and BUILD NUMBER
# Only required for windows to create a resource file for version info.
if(WIN32)
    string(REPLACE "." ";" PARTS ${LIB_VERSION})
    list (GET PARTS 0 PRODUCT_NUMBER )
    list (GET PARTS 1 PRODUCT_VERSION)
    list (GET PARTS 2 BUILD_NUMBER)
    # configure file will copy the version.rc.in to target as version.rc and also replace
    # the variable values in the file.
    configure_file(
            ${CMAKE_CURRENT_LIST_DIR}/version.rc.in
            ${CMAKE_CURRENT_BINARY_DIR}/version.rc
            @ONLY)
endif(WIN32)

# set target installation directories
set (INSTALL_ROOT_DIR ${CMAKE_BINARY_DIR}/install/${LIB_NAME}_${LIB_VERSION})

# Add subdirectories for projects
add_subdirectory(TariffLib)
add_subdirectory(TariffClient)


