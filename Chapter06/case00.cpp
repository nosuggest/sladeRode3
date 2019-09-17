//
// Created by Administrator on 2019/9/17.
//

#include "iostream"
// 替换N为6
#define N 6

//#define S(num) num*num
inline int S(int);

int S(int num) {
    return num * num;
}

using namespace std;

// 内联：替换
inline void case001() {
    cout << "inline function" << endl;
    cout << N << endl;
    cout << S(N) << endl;

    // num*num = 5+10*5+10
    cout << S(5 + 10) << endl;
}

