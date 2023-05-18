cmake_minimum_required(VERSION 3.5)

project(final_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(final_project main.cpp lib/global_functions.h lib/sql_queries.h)
