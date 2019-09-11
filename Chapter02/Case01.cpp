//
// Created by 沙韬伟 on 2019-09-11.
//

void case010() {
    int nums[] = {2, 3, 4, 5};
    cout << sizeof(nums) / sizeof(int) << endl;
    cout << "------------------" << endl;


    for (int i = 0; i <= 3; i++) {
        cout << nums[i] << endl;
    }

    cout << "------------------" << endl;

    for (int j = 0; j <= 4; ++j) {
        cout << nums[j] << endl;
    }
}