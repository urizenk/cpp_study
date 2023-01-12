cmake_minimum_required(VERSION 3.20) # 支持的最小版本
project(cpp_study) #项目名称




set(CMAKE_CXX_STANDARD 11) #设置c++版本
set(CMAKE_C_COMPILER "gcc") #配置c的编译器
set(CMAKE_CXX_COMPILER "g++") #配置c++的编译器

add_executable(cpp_study main.cpp lib/hello.cpp include/basic/add.h src/basic/add.cpp src/std_test/file/filetest.cpp include/std_test/filetest.h src/class_test/Book.cpp include/class_test/Book.h src/class_test/book_test.cpp include/class_test/book_test.h include/class_test/interfaces/Animal.h  src/class_test/Animal.cpp src/class_test/test.cpp include/class_test/test.h) #添加需要编译的文件

target_link_libraries(cpp_study ${PROJECT_SOURCE_DIR}/lib/build)
include_directories(./include)



