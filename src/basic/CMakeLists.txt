cmake_minimum_required(VERSION 3.20) # 支持的最小版本
project(cpp_study) #项目名称


aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} DIR_basic_SRCS)  #发现一个目录下所有的源代码文件并将列表存储在一个变量中。

add_library(my_basic ${DIR_basic_SRCS})

target_include_directories(my_basic PUBLIC  ${CMAKE_CURRENT_SOURCE_DIR}/../../include)



