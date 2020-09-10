project(TinyTracerTests)

set(TESTS_TARGET_NAME ${PROJECT_NAME})

set(ENGINE_INCLUDES ${ENGINE_DIR} "/public")

add_subdirectory(lib/googletest)
include_directories(${google_SOURCE_DIR}/include ${gtest_SOURCE_DIR} ${ENGINE_DIR}/public ${ENGINE_DIR})

add_executable(${TESTS_TARGET_NAME} test_main.cpp test1.cpp)
target_link_libraries(${TESTS_TARGET_NAME} gtest gtest_main ${TINY_TRACER_ENGINE})
target_include_directories(${TESTS_TARGET_NAME} PUBLIC ${ENGINE_DIR}/public)