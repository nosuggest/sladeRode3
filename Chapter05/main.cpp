#include <iostream>
#include "case00.cpp"
//#include "case01.cpp"
#include "case02.cpp"
#include "case03.cpp"
#include "case04.cpp"
#include "case05.cpp"
#include "case06.cpp"

using namespace std;

// 函数原型
// 函数申明
int sum(int, int);

int main() {
    cout << "求和：" << sum(3, 4) << endl;

    cout << "长方体：" << calculateCuboid(3, 4, 5) << endl;
    cout << "锥：" << calculateCone(3, 4) << endl;
    cout << "圆柱体：" << calcualteCylinder(3, 4) << endl;

//    int num = 9;
//    change(num);
//    cout << "传递引用后的值变化：" << num << endl;
//    int values[5];
//    input(values, 5);

//    int valueArray[] = {90, 56, 67, 89, 100};
//    show(valueArray, 5);
//    show(valueArray, 5);
//    show2(valueArray, valueArray + 4);

/*重要*/
/*    double arrs[3][5] = {
            {1.1, 1.1, 1.2, 1.3, 1.0},
            {1.7, 1.1, 1.4, 1.3, 1.5},
            {1.0, 1.9, 1.7, 1.5, 1.1},
    };
    print(arrs, 3);*/


//    cout << "n次方" << power(2, 3) << endl;
//    //申明函数指针
//    int (*ptrPower)(int, int);
//    //让申明的函数指针指向函数，用来调用
//    ptrPower = power;
//
//    cout << "n次方" << ptrPower(2, 3) << endl;
//    cout << "n次方" << (*ptrPower)(2, 3) << endl;//也可

    //calcAdd是double (*calc)(double, double)类型的指针函数
    print(calcAdd, 2.0, 3.0);


    return 0;
}

// 函数实现
int sum(int n1, int n2) {
    return n1 + n2;
}