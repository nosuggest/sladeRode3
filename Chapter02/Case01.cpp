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

void case011() {
    double nums[10] = {1};
    cout << nums[1] << endl;

    int intnums[10] = {1};
    cout << intnums[1] << endl;

    char charnums[10] = {1};
    cout << charnums[1] << endl;

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

}