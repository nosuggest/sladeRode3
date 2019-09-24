//
// Created by 沙韬伟 on 2019-09-24.
//

#include "Student.h"


Student::Student() {}

Student::~Student() {
    //栈内存内进行释放
    //销毁按照栈规则，先进后出
    cout << getName() << "boring" << endl;
}

const string &Student::getName() const {
    return name;
}

void Student::setName(const string &name) {
    Student::name = name;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int age) {
    Student::age = age;
}

double Student::getMoney() const {
    return money;
}

void Student::setMoney(double money) {
    Student::money = money;
}

Student::Student(const string &name, int age, double money) {
//    Student::name = name;
    setName(name);
    Student::age = age;
//    Student::money = money;
    setMoney(money);

    cout << "name:" << "\t" << getName() << "\t" << "age:" << "\t" << getAge() << "\t" << "money:" << "\t" << getMoney()
         << endl;
}


void Student::gainMoney(double money) {
    setMoney(getMoney() + money);
    cout << "now money is " << getMoney() << endl;
}