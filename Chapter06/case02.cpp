//
// Created by Administrator on 2019/9/18.
//

#include "iostream"

using namespace std;

/*极度需要注意，返回引用、地址原值而不是副本，要注意局部变量的回收机制*/
int& sum(){
    int num =10;
    // rnum为局部变量
    int& rnum = num;
    // 函数中的局部变量会被内存回收
    //所谓的内存回收并不是把对象清零，而是把内存被其他地方使用
    return rnum;//返回了一个局部变量的引用类型变量，是地址对应的值，不是副本
}

void test(){
    int x = 1;
    int y = 2;
    int z = 1024;
    int z1 = 1024;
    int z2 = 10241;
}
