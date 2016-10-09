cmake_minimum_required(VERSION 3.4)
project(algorithmic_toolbox)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(algorithmic_toolbox ${SOURCE_FILES})
add_executable(APlusB APlusB.cpp)
add_executable(max_pairwise_product max_pairwise_product.cpp)
add_executable(fiblist fiblist.cpp)
add_executable(fibonacci week2/code/fibonacci/fibonacci.cpp)
add_executable(fibonacci_huge week2/code/fibonacci_huge/fibonacci_huge.cpp)
add_executable(gcd week2/code/gcd/gcd.cpp)
add_executable(fract_knapsack week3/assigment/solutions/fract_knapsack.cpp)