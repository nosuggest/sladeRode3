//
// Created by 沙韬伟 on 2019-09-24.
//

#include "Teacher.h"

const string &Teacher::getName() const {
    return name;
}

void Teacher::setName(const string &name) {
    Teacher::name = name;
}

int Teacher::getAge() const {
    return age;
}

void Teacher::setAge(int age) {
    Teacher::age = age;
}

float *Teacher::getScores() const {
    return scores;
}

void Teacher::setScores(float *scores) {
    Teacher::scores = scores;
}

void Teacher::initScores() {
    this->scores = new float[1];
    this->scoreCount = 1;
}

void Teacher::addScore(float score) {
    this->scores[this->scoreCount - 1] = score;
    // 创建一个新数组，分配scoreCount+1个空间
    float *newScores = new float[scoreCount + 1];
    float *oldScores = scores;
    // 复制原数组到新数组中
    memcpy(newScores, scores, sizeof(float) * scoreCount);
    // 更新分配scoreCount
    scoreCount++;
    // scores指向新数组
    scores = newScores;
    delete oldScores;
}

void Teacher::showInfo() {
    cout << getName() << "\t" << getAge() << endl;
    for (int i = 0; i < scoreCount - 1; ++i) {
        cout << this->scores[i] << "\t";
    }
    cout << endl;
}

Teacher::Teacher() {
    initScores();
}

Teacher::Teacher(const string &name, int age, float *scores, int scoreCount) : name(name), age(age), scores(scores),
                                                                               scoreCount(scoreCount) {
    initScores();
}

Teacher::~Teacher() {
    delete this->scores;
}

Teacher::Teacher(const string &name, int age) : name(name), age(age) {
    initScores();
}


