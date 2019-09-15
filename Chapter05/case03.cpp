//
// Created by 沙韬伟 on 2019-09-15.
//

#include "iostream"

using namespace std;

void show2(const int *, const int *);

void show2(const int *begin, const int *end) {//定义了指针begin，end
    // 将begin赋值给临时指针变量ptr，如果指针ptr小于end，则循环
    for (const int *ptr = begin; ptr <= end; ptr++) {//指针的形式进行输出
        cout << *ptr << "\t";//*ptr读数
    }
    cout << endl;
}