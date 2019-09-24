//
// Created by 沙韬伟 on 2019-09-24.
//

#ifndef CHAPTER07_STUDENT_H
#define CHAPTER07_STUDENT_H


class Student {
private:
    string name;
    int age;
    double money;
public:
    virtual ~Student();

public:
    Student();

    Student(const string &name, int age, double money);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    double getMoney() const;

    void setMoney(double money);

    void gainMoney(double money);
};


#endif //CHAPTER07_STUDENT_H
