//
// Created by 沙韬伟 on 2019-09-11.
//

int binarySearch() {
    int nums[] = {1, 2, 4, 4, 5, 6, 9, 10};
    int target = 1;
    int start = 0;
    int end = sizeof(nums) / sizeof(int) - 1;

    int mid = -1;
    while (start <= end) {
        mid = (start + end) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[mid] > target) {
            end = mid - 1;
        } else if (nums[mid] < target) {
            start = mid + 1;
        }
    }

    return -1;

}