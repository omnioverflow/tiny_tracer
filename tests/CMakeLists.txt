set(TEST_BINARY ${CMAKE_PROJECT_NAME}_test)

message ("-- tests == " ${CORE_HEADERS} " ==")

# TODO: include header search directories

add_executable(${TEST_BINARY} main_test.cpp)
target_include_directories(${TEST_BINARY} PUBLIC ${CMAKE_SOURCE_DIR} "/" ${CORE_HEADERS}) 
