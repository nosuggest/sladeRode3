//
// Created by 沙韬伟 on 2019-09-15.
//

#include "iostream"

using namespace std;

//函数原型
double sum1(double, double);

// 函数指针申明，（*ptrSum）是指的是函数指针
double (*ptrSum)(double, double);

// ptrSum1是函数名，返回值是double*，double类型的指针
double *ptrSum1(double, double);


int power(int, int);

int power(int num1, int num2) {
    int tmp = 1;
    for (int i = 0; i < num2; ++i) {
        tmp *= num1;
    }
    return tmp;
}


