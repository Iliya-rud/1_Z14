cmake_minimum_required (VERSION 3.1)

project (1_Z14)

include_directories(${PROJECT_SOURCE_DIR})

set (1_Z14_SRC Calc.cpp CCoord.cpp AutoTest.cpp CVector.cpp main.cpp input.cpp)
set (1_Z14_HDR h.h)

add_executable(${PROJECT_NAME} ${1_Z14_SRC} ${1_Z14_HDR})
