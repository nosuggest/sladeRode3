//
// Created by 沙韬伟 on 2019-09-11.
//

#include "iostream"

using namespace std;

void case00() {
    const int N = 5;
    int nums[N];

    // sizeof()指list的内存容量
    // int的字节数是4
    // 所以list整体的size = sizeof(nums) / sizeof(int)
    cout << sizeof(nums) / sizeof(int) << endl;
    for (int i = 0; i < N; ++i) {
        nums[i] = i;
    }
    cout << nums << endl;

    for (int j = 0; j < N; ++j) {
        cout << nums[j] << endl;
    }
}
