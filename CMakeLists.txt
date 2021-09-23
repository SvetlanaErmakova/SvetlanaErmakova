cmake_minimum_required(VERSION 3.1)

project(homework_2)

set(HOMEWORK_2_SRC homework_2.cpp CVector.cpp Autotest.cpp)
set(HOMEWORK_2_HDR CVector.hpp Autotest.hpp)

add_executable(${PROJECT_NAME} ${HOMEWORK_2_SRC} ${HOMEWORK_2_HDR})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")