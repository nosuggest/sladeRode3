//
// Created by 沙韬伟 on 2019-09-25.
//

#include "demoConst.h"
#include "iostream"

using namespace std;

//1、const 修饰变量
void test1() {
    int num1 = 1024;
    const int num2 = 1111;
//    num2=2048;//num2只读了

    const int *ptr1_num1 = &num1;
    int const *ptr2_num1 = &num1;
    cout << ptr1_num1 << "\t" << ptr2_num1;

    //可以更改
    ptr1_num1 = &num2;
    cout << endl;
    cout << ptr1_num1 << "\t" << ptr2_num1;
    //    *ptr2_num1 = 1023;    //错误，const修饰指针变量时，
//    1、const位于*左侧指针所指向的数据是常量，不能通过改指针修改实际数据，指针本身是变量，可以指向其他内存地址；ptr1_num1可以改，*ptr1_num1不可以改
//    2、const位于*右侧，表示指针本身是常量，不能指向其他内存地址，所指向的数据可以修改
    int *const ptr3_num1 = &num1;
    *ptr3_num1 = 2048;//合法
//    ptr3_num1 = &num2;//不合法
//    3、const位于*两侧，则两者皆不可改
}

//2、const 修饰函数参数
void test2(const int num) {
//    num = 123;不合法，不可更改
}

void test3(const string &str) {
//    str = "ade";不合法，const修饰引用时，不能修改引用对象的任何成员
//    使用const传递对象的引用时，可以起到不copy对象的目的，节省效率
//    const 成员函数不能调用非const成员函数
}


//3、const修饰返回值
// 使用const修饰引用类型的一个常见的原因是提高效率
const string &getMax(const string &str1, const string &str2) {
    cout << str1.length() << endl;
    cout << str1.size() << endl;
    if (str1.length() > str2.length()) {
        return str1;
    }
    return str2;
}
//如果函数要返回局部对象，就该直接返回该局部对象，不要返回对象的引用

// 4、const修饰函数最后，说明函数不会修改成员变量值
class test {
public :
    int value;
    void change() const {
//        value = 100;//禁止修改成员变量
    }
};
