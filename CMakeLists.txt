cmake_minimum_required(VERSION 3.8)
project(KeyboardShortcutKatas.cpp)

set(CMAKE_CXX_STANDARD 17)
include_directories(lib)

enable_testing()
add_subdirectory(code)
add_subdirectory(tests)
