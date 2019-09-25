//
// Created by 沙韬伟 on 2019-09-24.
//

#ifndef CHAPTER07_TEACHER_H
#define CHAPTER07_TEACHER_H


class Teacher {
private:
    string name;
    int age;
    float *scores;//分数数组
    int scoreCount;
public:
    virtual ~Teacher();

public:
    Teacher(const string &name, int age, float *scores, int scoreCount);

public:
    Teacher();

public:
    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    float *getScores() const;

    void setScores();

    void initScores();//初始化学生成绩数组，默认一个元素空间
    void addScore(float);//向scores数组中添加一个分数

    void setScores(float *scores);

    void showInfo();

    Teacher(const string &name, int age);

    float getTotal();

//    返回学霸对象
    Teacher &superSchooler(Teacher &);

};


#endif //CHAPTER07_TEACHER_H
