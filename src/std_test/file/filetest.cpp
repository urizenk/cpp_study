//
// Created by Administrator on 2023/1/11.
//

#include "iostream"
#include "fstream"

void open_test(){
    char data[100];
    std::ofstream outfile;
    outfile.open("F:\\cv\\workspace\\cpp_study\\test\\test.txt");
    std::cout << "���ļ���д������" << std::endl;
    std::cout << "�����������:";
    std::cin.getline(data,100);
    outfile << data <<std::endl;

    std::cout <<"���������������:"<<std::endl;
    std::cin>>data;
    outfile<<data<<std::endl;

    outfile.close();

    std::ifstream  infile;
    infile.open("F:\\cv\\workspace\\cpp_study\\test\\test.txt");


    std::cout<<"��ʼ�������"<<std::endl;

    infile >> data;

    std::cout << data << std::endl;


    infile >> data;

    std::cout << data << std::endl;



}
