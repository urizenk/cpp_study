//
// Created by Administrator on 2023/1/11.
//

#ifndef CPP_STUDY_ANIMAL_H
#define CPP_STUDY_ANIMAL_H

class Animal{
private:
    int sex;
    int age;
public:
    virtual void eat() = 0;
    virtual void move() = 0;

    int getSex() const {
        return sex;
    }

    void setSex(int sex) {
        Animal::sex = sex;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Animal::age = age;
    }
};

class Fish: public Animal{
public:
    void move() override;
    void eat() override;
};

class Human: public Animal{
public:
    void eat() override;
    void move() override;
};

class Prince: public Human{

public:
    Prince();

public:
    void eat() override;
    void move() override;

    void travel();
};

#endif //CPP_STUDY_ANIMAL_H
