cmake_minimum_required(VERSION 3.19)
project(ModulesDerevianko)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp ModulesDerevianko.h)

add_library(ModulesDerevianko main.cpp ModulesDerevianko.h)
