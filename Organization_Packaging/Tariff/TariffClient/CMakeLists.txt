
#include_directories(${INSTALL_ROOT_DIR}/include/)
#link_directories(${INSTALL_ROOT_DIR}/lib)
message(STATUS "Test Client Source Dir " ${CMAKE_CURRENT_SOURCE_DIR})
file(GLOB_RECURSE SRC "*.cxx")
add_executable(${TESTCLIENT} ${SRC})
target_include_directories(${TESTCLIENT} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(${TESTCLIENT} ${LIB_NAME})

# install in bin
install(TARGETS ${TESTCLIENT}
        RUNTIME DESTINATION ${INSTALL_ROOT_DIR}/bin)

if(WIN32)
        install(CODE "execute_process(COMMAND ${PROJECT_SOURCE_DIR}/deploy.bat ${INSTALL_ROOT_DIR} ${COMPONENT_NAME})")
else(WIN32)
        install(CODE "execute_process(COMMAND ${PROJECT_SOURCE_DIR}/deploy.sh ${INSTALL_ROOT_DIR} ${COMPONENT_NAME})")
endif(WIN32)
