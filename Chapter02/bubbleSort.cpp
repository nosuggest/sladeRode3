//
// Created by 沙韬伟 on 2019-09-11.
//

template<class T>
void bubbleSort(T &nums) {
    int length = sizeof(nums) / sizeof(int) - 1;
    //假设nums:[3, 7, 7, 111, 1, 2, 4]
    for (int i = length; i > 0; i--) {//只需要排【7, 7, 111, 1, 2, 4]，第一个不用再排了，最后剩下来的即是最小的
        for (int j = 0; j < i; j++) {//比如针对i=4，[3, 7, 7, 111, 1, 2, 4]两两比较即可
            if (nums[j + 1] < nums[j]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }

    for (int k = 0; k <= length; ++k) {
        cout << nums[k] << endl;
    }
}