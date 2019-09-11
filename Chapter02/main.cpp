#include <iostream>
#include "Case00.cpp"
#include "binarySeach.cpp"
#include "bubbleSort.cpp"
#include "Case01.cpp"

int main() {
    std::cout << "Hello, Start!" << std::endl;
    case000();
    std::cout << "Next One!" << std::endl;
    case001();
    std::cout << "Next One!" << std::endl;
    case002();
    int ans;
    ans = binarySearch();
    std::cout << "二分查找结果:" << ans << std::endl;

    int needRankNums[] = {3, 7, 7, 111, 1, 2, 4};
    bubbleSort(needRankNums);

    case010();

    cout << "__________" << endl;
    case011();

    return 0;
}