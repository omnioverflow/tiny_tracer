cmake_minimum_required(VERSION 3.15)

project(quick_tracer)

set(CMAKE_CXX_STANDARD 14)

add_executable(${PROJECT_NAME}  main.cpp core/impl/bmp.cpp)
set(CORE_HEADERS "core/pbulic")
target_include_directories(${PROJECT_NAME} PUBLIC $CORE_HEADERS)

message("===== PROJECT_NAME  " ${PROJECT_NAME} " =====")
message("===== INCLUDE_DIRECTORIES " ${INCLUDE_DIRECTORIES} " =====") 
message("= CORE_HEADERS " ${CORE_HEADERS} " =")

# $INCLUDE_DIRECTORIES
include_directories(core) #src
add_subdirectory(tests)
add_subdirectory(lib/googletest)

set(SOURCES ${INCLUDE_DIRECTORIES})
