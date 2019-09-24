//
// Created by 沙韬伟 on 2019-09-24.
//
#include "iostream"

using namespace std;


// template <typename 参数类型1,typename 参数类型2...>
// 返回值类型 函数名(形参列表){
// }

// 类似Java中的泛型
template<typename T>
void Swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void sort(T nums[], int len) {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len - i - 1; ++j) {
            if (nums[j] > nums[j + 1]) {
                T temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}

template<typename T>
void print(T nums[], int len) {
    for (int i = 0; i < len; ++i) {
        cout << nums[i] << "\t";
    }
    cout << endl;
}