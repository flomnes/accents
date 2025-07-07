cmake_minimum_required(VERSION 3.22)
project(accent VERSION 1.0)

include(CheckCXXSourceCompiles)
include(CheckIncludeFiles)
include(CheckIncludeFileCXX)
include(CheckCXXCompilerFlag)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)


