//
// Created by 沙韬伟 on 2019-09-15.
//

#include "iostream"

using namespace std;
string valueNames[] = {"体力", "智力", "魅力", "道德", "气质"};

void change(int &num) {//传递的是引用，&num是地址，num是值
    num++;
}

void input(int[], int);//通常会把数组的长度传递过来
void show(int[], int);

void input(int values[], int size) {//传递的是数组的指针
    if (size > 5) {
        cout << "数组越界" << endl;
        return;
    }
    for (int i = 0; i < size; ++i) {
        cout << valueNames[i] << ":";
        cin >> values[i];
    }
    show(values, 5);

}


void show(int values[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << valueNames[i] << ":" << "\t" << values[i] << endl;
    }
}