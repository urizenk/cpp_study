//
// Created by Administrator on 2023/1/11.
//

#include <class_test/interfaces/Animal.h>
#include "iostream"

void Fish::eat() {
    std::cout << "����һ��<��)#)))�Q���ҳ�СϺ��" <<std::endl;
}

void Fish::move() {
    std::cout << "����һ���㣬����ˮ����Ӿ" << std:: endl;
}

void Human::eat() {
    std::cout << "����һ���ˣ��ҳ��׷�" << std:: endl;
}

void Human::move() {
    std::cout << "����һ���ˣ�����·" << std:: endl;
}

void Prince::eat() {
    std::cout << "����һ���������ҳ�ɽ�亣��" << std:: endl;
}

void Prince::move() {
    std::cout << "����һ������������˽�˷ɻ�" << std:: endl;
}

void Prince::travel() {
    std::cout << "����һ����������ȫ��������" << std:: endl;
}

Prince::Prince() = default;
