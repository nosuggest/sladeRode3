//
// Created by Administrator on 2019/9/17.
//

#include "iostream"

using namespace std;
//不允许常量引用,以为a给被改变，违背了常量的基本概念
//int& a = 12;

//指向常量引用 - 合法的
const int &a = 12;//引用作为参数，函数将使用原始数据，而非副本
//当数据所占内存比较大的时候，建议使用引用参数

void swap(int, int);

void swap1(int *, int *);

void swap2(int &, int &);

void swap(int num1, int num2) {
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}

void swap1(int *p1, int *p2) {//交换*p1存储的地址所存储的值
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void swap2(int &num1, int &num2) {
    //使用引用的理由：
    //1、可以更加简便的书写代码
    //2、可以直接传递某个对象，而不是把对象进行一副复制
    //3、配合const使用，可以避免引用对象被修改
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}