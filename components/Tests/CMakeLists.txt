cmake_minimum_required(VERSION 2.6)

project(Tests)

include_directories(
    ${LTL_INCLUDE_DIRS}
    ${Memallocator_INCLUDE_DIRS}
    ${UnityDefinitions_INCLUDE_DIRS}
    ${LinearMath_INCLUDE_DIRS})


set(ALL_SOURCES 
    ${LinearMath_TRANSLATION_UNITS}
    ${Memallocator_TRANSLATION_UNITS}
    main.cpp)

add_executable(Tests ${ALL_SOURCES})
