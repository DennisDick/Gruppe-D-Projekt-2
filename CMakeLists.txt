#define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

#define the project name
project(project VERSION 1.0 LANGUAGES C CXX)

#define the c standard version
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#add a library for your functions
add_library(project_library STATIC
   src/developer.cpp
)
#add the includes to the library
target_include_directories(project_library PUBLIC include)

#add some compile options
add_compile_options(-Wall -Wextra -pedantic) 

#add an executable and assign files to it
add_executable(project src/main.cpp)

# add the include directories
target_include_directories(project PRIVATE include)

# link your library
target_link_libraries(project PRIVATE project_library)

#enable the testing
enable_testing()

#check if we have gtest
find_package(GTest REQUIRED)

#include the gtest CMake stuff
include(GoogleTest)

#create a test executable
add_executable(tests test/test.cpp)

#link the gtest libraries
target_link_libraries(tests PRIVATE GTest::GTest GTest::Main)

#link the library we want to test
target_link_libraries(tests PRIVATE project_library)

#add the include directories
target_include_directories(tests PUBLIC include)

#discover and add tests to the test list
gtest_discover_tests(tests)