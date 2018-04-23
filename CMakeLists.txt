cmake_minimum_required(VERSION 3.8)
project(Luogu)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp 简单模拟/P1003.cpp 简单模拟/P1003.h 简单模拟/P1067.cpp 简单模拟/P1067.h 简单模拟/P1540.cpp 简单模拟/P1540.h 简单模拟/P1056.cpp 简单模拟/P1056.h 简单模拟/P1328.cpp 简单模拟/P1328.h 简单模拟/P1563.cpp 简单模拟/P1563.h
        贪心/P1090.cpp 贪心/P1090.h BFS/P1162.cpp BFS/P1162.h 贪心/P1181.cpp 贪心/P1181.h 排序/P1068.cpp 排序/P1068.h 排序/P1781.cpp 排序/P1781.h 贪心/P1208.cpp 贪心/P1208.h)
add_executable(Luogu ${SOURCE_FILES})