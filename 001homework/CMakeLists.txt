cmake_minimum_required(VERSION 3.1)

project(homew_1)

set(HOMEW_1_SRC homew_1.cpp CIntN.cpp)
set(HOMEW_1_HDR CIntN.hpp)

add_executable(${PROJECT_NAME} ${HOMEW_1_SRC} ${HOMEW_1_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")