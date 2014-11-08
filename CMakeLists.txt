project(geometry)

enable_language(CXX)

add_subdirectory("gtest-1.7.0")

include_directories("." "gtest-1.7.0/include")

add_executable(main main.cpp geometry.cpp)
add_executable(test test.cpp geometry.cpp)

target_link_libraries(test gtest gtest_main pthread)
