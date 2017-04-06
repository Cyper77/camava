#####################################
cmake_minimum_required (VERSION 2.8) 
project (camava_test)
find_package(camava REQUIRED)
add_executable (simpletest_camava simpletest_camava.cpp)  
target_link_libraries (simpletest_camava ${camava_LIBS})
#####################################

