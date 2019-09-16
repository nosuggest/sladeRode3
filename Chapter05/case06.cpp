//
// Created by 沙韬伟 on 2019-09-16.
//

#include "iostream"

using namespace std;

//double (*)(double, double) 函数指针
//double, double 为函数指针对应的值的类型
void print(double (*)(double, double), double, double);

double calcAdd(double, double);

double calcAdd(double num1, double num2) {
    return num1 + num2;
}

void print(double (*calc)(double, double), double num1, double num2) {
    double result = calc(num1, num2);
    cout << result << endl;
}

