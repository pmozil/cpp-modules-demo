cmake_minimum_required(VERSION 3.28)

project(modules-example)

set(CMAKE_CXX_STANDARD 20)

add_executable(demo)
target_sources(demo
    PUBLIC
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)
target_sources(demo
  PUBLIC
    FILE_SET modules TYPE CXX_MODULES FILES
    ${CMAKE_SOURCE_DIR}/lib/demo.cppm
)

set_property(DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT demo)
