cmake_minimum_required(VERSION 3.8)
project(KeyboardShortcutKatas.code CXX)
set(SOURCE_FILES Inline.h)
add_library(KeyboardShortcutKatas.code ${SOURCE_FILES} )

set_target_properties(KeyboardShortcutKatas.code PROPERTIES LINKER_LANGUAGE CXX)
