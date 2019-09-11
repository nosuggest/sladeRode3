//
// Created by Administrator on 2019/9/11.
//

void case30() {
    int int_value = 1024;
    int &refValue = int_value;//refValue指向引用，是int_Value的另一个别名


//    int& refValue1; 错误，必须被初始化
//    int &refValue1 = 10; 错误，引用只能指向对象不能指向字面值或者计算结果
    const int &refValue1 = 10;//引用只能指向常量
// 引用必须初始化，所以使用引用之前不需要保证其保存对象是否有值，所以比指针的效率更高

/*
 *  两者的关系：
 *      1、引用对指针进行了封装，底层仍然是指针
 *      2、获取引用地址的时候，编译器会进行内部转换
 *
 * */

    int num = 109;
    int &rel_num = num;
    rel_num = 110;
    cout << num << endl;//110
    cout << rel_num << endl;//110
    cout << &rel_num << endl;//0x61fef8
    /*
     * 以上代码等于：
     * int num = 109;
     * int* ptr_num= &num;
     * *ptr_num = 110;
     * 个人感觉，rel_num = *ptr_num.就是指针对应的值
     * */


}

void case31() {
    double socre[] = {13.2, 54.3};
    double *ptr_score = socre;

    // *ptr_score是取到首元素的值，ptr_score存储的是socre首元素的地址
    cout << *ptr_score << "\t" << ptr_score << endl;

}