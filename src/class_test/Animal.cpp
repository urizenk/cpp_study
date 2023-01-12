//
// Created by Administrator on 2023/1/11.
//

#include <class_test/interfaces/Animal.h>
#include "iostream"

void Fish::eat() {
    std::cout << "我是一条<。)#)))≦，我吃小虾米" <<std::endl;
}

void Fish::move() {
    std::cout << "我是一条鱼，我在水里游泳" << std:: endl;
}

void Human::eat() {
    std::cout << "我是一个人，我吃米饭" << std:: endl;
}

void Human::move() {
    std::cout << "我是一个人，我走路" << std:: endl;
}

void Prince::eat() {
    std::cout << "我是一个公主，我吃山珍海外" << std:: endl;
}

void Prince::move() {
    std::cout << "我是一个公主，我坐私人飞机" << std:: endl;
}

void Prince::travel() {
    std::cout << "我是一个公主，我全世界旅游" << std:: endl;
}

Prince::Prince() = default;
