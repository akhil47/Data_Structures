project(Tests)

add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Tests RedBlackTreeTests.cpp AVLTreeTests.cpp PrefixTreeTests.cpp)

target_link_libraries(Tests gtest gtest_main)
target_link_libraries(Tests Source_Files)