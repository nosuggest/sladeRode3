//
// Created by 沙韬伟 on 2019-09-11.
//

#include "iostream"

using namespace std;

void case000() {
    const int N = 5;
    int nums[N];

    // sizeof()指list的内存容量
    // int的字节数是4
    // 所以list整体的size = sizeof(nums) / sizeof(int)
    cout << sizeof(nums) / sizeof(int) << endl;

    cout << "start" << endl;

    for (int i = 0; i < N; ++i) {
        nums[i] = i;
    }
    cout << nums << endl;

    for (int j = 0; j < N; ++j) {
        cout << nums[j] << endl;
    }
}


void case001() {
    // 循环
    // if判断
    int nums[]{1, 2, 3, 4, 3, 1, 3};
    int size = sizeof(nums) / sizeof(int);

    int tmp = 0;

    int minTmp = nums[0];
    int maxTmp = nums[0];

    for (int i = 0; i < size; ++i) {
        cout << nums[i] << endl;
        tmp += nums[i];
        if (nums[i] < minTmp) {
            minTmp = nums[i];
        }
        if (nums[i] > maxTmp) {
            maxTmp = nums[i];
        }
    }

    cout << "sum value:" << tmp << endl;
    cout << "min value:" << minTmp << endl;
    cout << "max value:" << maxTmp << endl;

}

void case002() {
    int nums[2];
    // inside0!=inside1,且没有默认值，不同于java
    cout << "inside0:" << nums[0] << endl;
    cout << "inside1:" << nums[1] << endl;
    // outside0!=outside1，数组越界，错误
//    cout << "outside0:" << nums[2] << endl;
//    cout << "outside0:" << nums[3] << endl;

    cout << "___________________waiting___________________" << endl;
    int values[] = {1, 2};
    cout << "inside0:" << values[0] << endl;
    cout << "inside1:" << values[1] << endl;
    // outside0!=outside1，数组越界，错误
//    cout << "outside0:" << values[2] << endl;
//    cout << "outside0:" << values[3] << endl;

}