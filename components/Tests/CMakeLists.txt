cmake_minimum_required(VERSION 2.6)

project(Tests)

# custom flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -msse -Wall -std=c++11 ")

file(GLOB INCLUDE_UNITS include/*.h)
file(GLOB INCLUDE_UNITS ${INCLUDE_UNITS} include/test/*.h)

include_directories("${PROJECT_SOURCE_DIR}/include")

include_directories(
    ${LTL_INCLUDE_DIRS}
    ${Memallocator_INCLUDE_DIRS}
    ${UnityDefinitions_INCLUDE_DIRS}
    ${LinearMath_INCLUDE_DIRS})

set(ALL_SOURCES 
    ${LinearMath_TRANSLATION_UNITS}
    ${Memallocator_TRANSLATION_UNITS}
    ${UnityDefinitions_INCLUDE_UNITS}
    ${Memallocator_INCLUDE_UNITS}
    ${LinearMath_INCLUDE_UNITS}
    ${LTL_INCLUDE_UNITS}
    ${INCLUDE_UNITS}
    main.cpp)

add_executable(Tests ${ALL_SOURCES})
