# Made By tor @ https://stargaze.cloud/

cmake_minimum_required(VERSION 3.27)
project(ImGui-CMake)

set(CMAKE_CXX_STANDARD 20)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/includes)

file(GLOB_RECURSE HEADER_FILES ${SRC_DIR}/*.h)
file(GLOB_RECURSE SOURCE_FILES ${SRC_DIR}/*.cpp)

file(GLOB_RECURSE INCLUDE_HEADER_FILES ${INCLUDE_DIR}/*.h)
file(GLOB_RECURSE INCLUDE_SOURCE_FILES ${INCLUDE_DIR}/*.cpp)

add_executable(ImGui-CMake ${INCLUDE_HEADER_FILES} ${INCLUDE_SOURCE_FILES} ${HEADER_FILES} ${SOURCE_FILES})

target_link_libraries(ImGui-CMake PRIVATE d3d11 d3dcompiler dwmapi)