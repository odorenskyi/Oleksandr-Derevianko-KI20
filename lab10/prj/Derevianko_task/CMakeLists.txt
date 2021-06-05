cmake_minimum_required(VERSION 3.19)
project(Derevianko_task)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(SOURCE_FILES main.cpp)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}\\cmake")

add_executable( Derevianko_task ${SOURCE_FILES} )

include(FindModulesDerevianko)
find_package(ModulesDerevianko REQUIRED)
include_directories(${MODULES_DEREVIANKO_DIR})
target_link_libraries(${PROJECT_NAME} ${MODULES_DEREVIANKO_LIBRARY})

