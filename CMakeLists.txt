cmake_minimum_required(VERSION 3.28)
project(SDL2-Draw_Render)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake_modules)

set(SDL2_PATH "C:/dev/DEVEL/SDL2-2.30.5/x86_64-w64-mingw32")

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(SDL2-Draw_Render main.cpp)

target_link_libraries(SDL2-Draw_Render ${SDL2_LIBRARY} ${SDL2main})
