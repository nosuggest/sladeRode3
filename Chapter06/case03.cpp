//
// Created by Administrator on 2019/9/22.
//

#include "case03.h"

using namespace std;

// 函数可以不返回值，默认返回传入引用对象本身
// 返回引用时，要求函数参数中包括被返回的引用对象
int &sum1(int &num1, int &num2) {
    num1++;
    num2++;
    //没有返回值得情况下，返回最后一个更新的引用
    //只能返回input的某一个值
//    return num1 + num2;
}

int &sum2(int &num) {
    num++;
    return num;
}

void show() {
    int num1 = 10;
    int num2 = 20;
    int &res = sum1(num1, num2);
    cout << res << endl;

    // 此处相当于&result 就是 sum2（num1）的一个别名，对 sum2（num1）修改，相当于就是对result进行修改
    // 如果要保证sum2（num1）不被修改，需要再sum2之前改成const，定义sum2的时候，为const int&
    int& result = sum2(num1);
    cout << result << endl;
    sum2(num1)=55;
    cout << result << endl;
}

