cmake_minimum_required(VERSION 2.8.10)

# You can tweak some common (for all subprojects) stuff here. For example:

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON)
set(CMAKE_DISABLE_SOURCE_CHANGES  ON)

# custom flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -msse -Wall -std=c++11 ")

if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_BINARY_DIR}")
  message(SEND_ERROR "In-source builds are not allowed.")
endif ()

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE   ON)

# Remove 'lib' prefix for shared libraries on Windows
if (WIN32)
  set(CMAKE_SHARED_LIBRARY_PREFIX "")
endif ()

# Doc Definitions:
# NODEPENDENCY = No dependency
# TRANSLATIONS_UNITS_OF = Projects that it needs translation units(.cpp's)
# INCLUDE_UNITS_OF = Projects that it needs includes (.h's)
# EXPORT_TRANSLATIONS_UNITS = Export it's translations units as ${PROJECT_NAME}_TRANSLATION_UNITS
# EXPORT_INCLUDES = Exports it's .h's files throughout ${PROJECT_NAME}_INCLUDE_DIRS

# Sub projects including on the main project itself
add_subdirectory(components/UnityDefinitions) # NODEPENDENCY, EXPORT_INCLUDES
add_subdirectory(components/LinearMath) # INCLUDE_UNITS_OF(UnityDefinitions), EXPORT_TRANSLATIONS_UNITS, EXPORT_INCLUDES
add_subdirectory(components/Memallocator) # INCLUDE_UNITS_OF(UnityDefinitions), EXPORT_TRANSLATIONS_UNITS, EXPORT_INCLUDES
add_subdirectory(components/LTL) # INCLUDE_UNITS_OF(Memallocator), TRANSLATIONS_UNITS_OF(Memallocator), EXPORT_TRANSLATIONS_UNITS, EXPORT_INCLUDES
add_subdirectory(components/Tests)