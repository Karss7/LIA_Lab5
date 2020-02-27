cmake_minimum_required(VERSION 3.10)

project(SimpleProject VERSION 1.0 LANGUAGES CXX)

get_directory_property(IS_SUBPROJECT PARENT_DIRECTORY)

option(TESTING "Enable unit testing" ON)

set( SRCS 
  main.cpp
  MathOps.cpp
)
set( HDRS
  MathOps.h
)

add_executable(SimpleProject ${SRCS} ${HDRS})
