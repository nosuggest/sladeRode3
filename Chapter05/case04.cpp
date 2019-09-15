//
// Created by 沙韬伟 on 2019-09-15.
//

#include "iostream"

using namespace std;

void print(double (*)[5], int);// 高位数组还是类型+(*)+[x]，其中，(*)代表是指针，[x]代表单个数组的长度，len是指针的长度

void print(double (*arrs)[5], int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << arrs[i][j] << "\t";
        }
        cout << endl;
    }
}