#include <iostream>
#include <iterator>
#include "Integer.cpp"
#include "demoConst.cpp"

using namespace std;

int add(int a, int b);

void swap(int &a, int &b);

int main() {
//    Integer integer(20);
//    Integer integer1(40);
//    Integer integer2;
//    cout << "加之前" << integer2.intValue() << endl;
//    integer2 = integer + integer1;
//    cout << "加之后" << integer2.intValue() << endl;
//    test1();

//    string string1 = "abc";
//    string string2 = "a";
//    cout << getMax(string1, string2) << endl;
//
//    test *t = new test();
//    t->change();

//    Integer int5;
//    int5 = 1024 + Integer(5);
//    cout << int5.intValue() << endl;
    cout << add(1, 2) << endl;

    int a = 10;
    int b = 20;
    cout << a << "\t" << b << endl;
    swap(a, b);
    cout << a << "\t" << b << endl;
}

int add(int a, int b) {
    return a + b;
}

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}
