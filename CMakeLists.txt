cmake_minimum_required(VERSION 3.8)
project(Data_Structures)

add_definitions(-std=gnu++0x)

set(SOURCE_FILES main.cpp)
add_executable(Data_Structures ${SOURCE_FILES})

include_directories(Source_Files)

add_subdirectory(Source_Files)
add_subdirectory(Tests)

target_link_libraries(Data_Structures Source_Files)