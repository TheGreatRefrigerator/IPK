cmake_minimum_required(VERSION 3.12)
project(Uebung7)

set(CMAKE_CXX_STANDARD 17)

add_executable(area_calculation area_calculation.cpp point.cc polygon.cpp)
add_executable(pixels pgm.cc)
#target_link_libraries(readvector PUBLIC vector_statistics)

#enable_testing()
#add_executable(statistics_test statistics_test.cpp)
#target_link_libraries(statistics_test PUBLIC vector_statistics)
#add_test(NAME statistics_test COMMAND statistics_test)
