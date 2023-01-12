//
// Created by Administrator on 2023/1/11.
//

#include "iostream"
#include "fstream"

void open_test(){
    char data[100];
    std::ofstream outfile;
    outfile.open("F:\\cv\\workspace\\cpp_study\\test\\test.txt");
    std::cout << "向文件中写入内容" << std::endl;
    std::cout << "输入你的名字:";
    std::cin.getline(data,100);
    outfile << data <<std::endl;

    std::cout <<"现在输入你的年龄:"<<std::endl;
    std::cin>>data;
    outfile<<data<<std::endl;

    outfile.close();

    std::ifstream  infile;
    infile.open("F:\\cv\\workspace\\cpp_study\\test\\test.txt");


    std::cout<<"开始输出内容"<<std::endl;

    infile >> data;

    std::cout << data << std::endl;


    infile >> data;

    std::cout << data << std::endl;



}
