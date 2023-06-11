cmake_minimum_required(VERSION 3.24)
project(test)

set(CMAKE_CXX_STANDARD 17)

add_executable(test main.cpp Tree/Binary_Tree.cpp Tree/Binary_Tree.h Tree/Search_Tree.cpp Tree/Search_Tree.h List/List.cpp List/List.h List/Stack.cpp List/Stack.h List/Queue.cpp List/Queue.h)
