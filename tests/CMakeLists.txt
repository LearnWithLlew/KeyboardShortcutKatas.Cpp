cmake_minimum_required(VERSION 3.8)
project(KeyboardShortcutKatas.tests)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES
        main.cpp
        NewTest.cpp)
add_executable(KeyboardShortcutKatas.tests ${SOURCE_FILES} )
add_test(NAME KeyboardShortcutKatas.tests COMMAND KeyboardShortcutKatas.tests)
target_link_libraries(KeyboardShortcutKatas.tests KeyboardShortcutKatas.code)
