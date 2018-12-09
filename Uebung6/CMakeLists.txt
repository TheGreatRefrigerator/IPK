cmake_minimum_required(VERSION 3.12)
project(Uebung6)

set(CMAKE_CXX_STANDARD 17)

add_library(vector_statistics statistics.cpp io.cc)

add_executable(readvector readvector.cpp)
add_executable(uniform uniform.cpp)
add_executable(normal normal.cpp)
target_link_libraries(readvector PUBLIC vector_statistics)
target_link_libraries(uniform PUBLIC vector_statistics)
target_link_libraries(normal PUBLIC vector_statistics)

add_executable(letterfrequencies letterfrequencies.cpp)
add_executable(wordfrequencies wordfrequencies.cpp sanitizeword.cc)
add_executable(wordfrequenciesunordered wordfrequenciesunordered.cpp sanitizeword.cc)

enable_testing()
add_executable(statistics_test statistics_test.cpp)
target_link_libraries(statistics_test PUBLIC vector_statistics)
add_test(NAME statistics_test COMMAND statistics_test)
