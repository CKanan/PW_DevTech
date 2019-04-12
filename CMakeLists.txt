cmake_minimum_required(VERSION 3.0)

project(TestString)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra")

add_executable(pro string_length.c string_compare.c string_palindrome.c main.c)
