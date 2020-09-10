cmake_minimum_required(VERSION 3.15)
project(TinyTracer)

set(CMAKE_CXX_STANDARD 14)

set(TINY_TRACER_ENGINE TinyTracerEngine)
set(ENGINE_DIR ${CMAKE_CURRENT_SOURCE_DIR} "/" engine)

add_subdirectory(engine)
add_subdirectory(test)

include_directories(src/public)
aux_source_directory(src/impl TINY_TRACER_IMPL_FILES)
add_executable(${PROJECT_NAME} main.cpp ${TINY_TRACER_IMPL_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC engine/public)
target_link_libraries(${PROJECT_NAME} ${TINY_TRACER_ENGINE})