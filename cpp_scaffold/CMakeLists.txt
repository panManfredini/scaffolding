cmake_minimum_required(VERSION 3.14)
project(dummy_project) 

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

###### ----- GTest Lib ----- ######
include(FetchContent)
FetchContent_Declare( googletest  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip )
FetchContent_MakeAvailable( googletest )
include( GoogleTest )
enable_testing()
###### --------------------- ######

# - Libs
add_library(dummy_lib src/dummy.cpp) 
target_include_directories (dummy_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# - Execs
add_executable( main src/main.cpp ) 
target_link_libraries(main dummy_lib)


###### ---- Tests ------ ######
add_executable(test_run test/test_dummy.cpp)
target_link_libraries(test_run gtest_main dummy_lib)

gtest_discover_tests(test_run)
###### ----------------- ######


# - Helper
# file(GLOB_RECURSE sources CONFIGURE_DEPENDS "*.cpp")
# add_executable(my_target ${sources})

