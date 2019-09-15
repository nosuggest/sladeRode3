//
// Created by 沙韬伟 on 2019-09-12.
//

#include "iostream"

void case40() {
    //允许过程中分配int值未命名的空间
    //使用prt_int这个指针指向这个新的int值的内存空间
    //不要prt_int++，这样会造成new int申请的空间无法被释放，造成内存泄漏/野指针
    int *prt_int = new int;
//    *prt_int = 96;
    cout << prt_int << endl;
    cout << *prt_int << endl;
    delete prt_int;//释放new分配的内存
    cout << prt_int << endl;
    cout << *prt_int << endl;
}

void case41() {
    int nums[5];//编译期分配的内存空间，空间的大小及nums大小
    int *nums1 = new int[5];//动态空间，只有在运行到的时候才会申请内存，这边其实取得是nums1的指针对象的大小
    // new 应该与 delete 成对出现，申请一个指针，就要有相应的释放

    cout << sizeof(nums) << "\t" << sizeof(nums1) << endl;
}

/*
void case42() {//两个指针不能指向同一个内存地址，这个是非常危险的，禁止！
    // 申请内存，创建指针指向内存
    int *ptr_int = new int;
    // 给指针指向的内存赋值
    *ptr_int = 40;
    // 起另一个指针去指向相同的地址
    int *ptr_int1 = ptr_int;

    delete ptr_int;
    //看看另一个指针是否还能取到值
    cout << *ptr_int1 << endl;
}
*/

void case43() {
    // 申请一个连续的int内存地址，并创建一个intArray数组指针指向这个内存空间
    int *intArray = new int[10];

    delete[] intArray;//释放intArray内存空间，只能释放new生成的内存空间
}

/*
 * 1。不要用delete释放非new生成的内存
 * 2。不要用delete释放同一次内存两次
 * 3。new[]生成，delete[]删除
 * 4。可以delete可以释放空指针
 * */


void case44() {
    int array[] = {22, 3, 4, 5, 112, 31};
    int *ptr_array = array;

    for (int i = 0; i < 6; ++i) {
        // 不要改变原始指针值，进行+i移动
        cout << *(ptr_array + i) << endl;
    }

}

void case45() {
    int array[] = {15, 23, 44, 56, 2};
    int *ptr_stat = array;//首元素的值
    int *ptr_end = array + 4;//尾元素的值
    int tmp;
    while (ptr_stat < ptr_end) {//因为是连续的内存地址
        // 做值交换
        tmp = *ptr_stat;
        *ptr_stat = *ptr_end;
        *ptr_end = tmp;

        ptr_stat++;
        ptr_end--;
    }

    for (int i = 0; i < 5; ++i) {
        cout << array[i] << endl;
    }
}

void case46() {
    // 一位数组
    int *p = new int[4];

    //使用指针来创建2维数组
    // int(*pNums)可以当作二维数组中的一维表述，降维操作
    int (*pNums)[3] = new int[4][3];

    int arrays[4][3] = {{1,  2,  3},
                        {4,  5,  6},
                        {7,  8,  9},
                        {10, 12, 13}};

    pNums = arrays;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {

//            cout << *(pNums + i) << endl;//存一位数组的数组地址，0x7fa1efc02af0
//            cout << pNums + i << endl;//一位数组内的元素的地址，0x7fd27f402af0
            cout << *(*(pNums + i) + j) << ",";
//            cout << pNums[i][j] << ",";这样也可以取出每个元素
        }
        cout << endl;
    }

}