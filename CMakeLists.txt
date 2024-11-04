cmake_minimum_required(VERSION 3.27)
project(CS303_Assignment_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CS303_Assignment_3
        Circular_Queue.cpp
        Circular_Queue.h
        Main.cpp
        Recursive_Search_Last.h
        Recursive_Search_Last.cpp
        Insertion_Sort.h
        Insertion_Sort.cpp)
