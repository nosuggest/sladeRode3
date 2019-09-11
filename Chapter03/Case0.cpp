//
// Created by Administrator on 2019/9/11.
//
#include <iostream>

using namespace std;

/*
 *  int* ptr_num; int* 代表是指针，ptr_num是指针名，也就是一个地址变量，表示一个16进制地址
 *  int *ptr_num: *pry_num 代表是一个整形变量，更能表示是一个整形值
 *  &year：&代表着取值的意思
 *
 * */

void case01() {
    int year = 2019;
    int *ptr_year = &year;
    cout << "*ptr_year：" << "\t" << *ptr_year << endl;
    cout << "ptr_year:" << "\t" << ptr_year << endl;
}