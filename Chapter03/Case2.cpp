//
// Created by Administrator on 2019/9/11.
//

void case20() {
    //野指针,无赋值，极度危险
//    int *ptr_int;
//    cout << *ptr_int << endl;

    //空指针定义
//    int *ptr_int0 = nullptr;
//    cout << *ptr_int0 << endl;

//    int *ptr_int1 = 0;
//    cout << *ptr_int1 << endl;

    double num = 3.14;
    double *ptr_num1 = &num;
    void *ptr_num2 = &num;//不定的指针类型，不能被改变,一般用来和其他指针进行比较
//    *ptr_num2 = 12313;//不能被改变
    cout << boolalpha;//使得输出值满足Boolean类型
    cout << (ptr_num1 == ptr_num2) << endl;

}