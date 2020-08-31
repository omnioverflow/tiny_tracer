cmake_minimum_required(VERSION 3.15)
project(quick_tracer)

set(CMAKE_CXX_STANDARD 14)

add_executable(quick_tracer main.cpp core/impl/bmp.cpp)

# $INCLUDE_DIRECTORIES
# include_directories(core) #src
# add_subdirectory(test)
# add_subdirectory(test)
# add_subdirectory(lib/googletest)

target_include_directories(quick_tracer PUBLIC "core/public")
