//
// Created by 沙韬伟 on 2019-09-15.
//
#include "iostream"

using namespace std;

void show(int[], int);

void show1(int[], int);

void show(int valueArray[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << valueArray[i]++;//传递的是指针，所以这边的改变值是改变的地址上对应的值，相当于全局变量
    }
    cout << endl;
}

void show1(const int valueArray[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << valueArray[i];//通过使用const可以避免被改变,++会报错
    }
    cout << endl;
}
