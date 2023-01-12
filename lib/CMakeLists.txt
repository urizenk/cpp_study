cmake_minimum_required(VERSION 3.20) # 支持的最小版本
project(hello) #项目名称

set(CMAKE_CXX_STANDARD 11) #设置c++版本
set(CMAKE_C_COMPILER "gcc") #配置c的编译器
set(CMAKE_CXX_COMPILER "g++") #配置c++的编译器


add_library(hello SHARED ${PROJECT_SOURCE_DIR}/hello.cpp) #生成动态库或共享库




