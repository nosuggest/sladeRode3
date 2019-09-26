#include <iostream>
#include <iterator>
#include "Integer.cpp"
#include "demoConst.cpp"

using namespace std;


int main() {
//    Integer integer(20);
//    Integer integer1(40);
//    Integer integer2;
//    cout << "加之前" << integer2.intValue() << endl;
//    integer2 = integer + integer1;
//    cout << "加之后" << integer2.intValue() << endl;
//    test1();

    string string1 = "abc";
    string string2 = "a";
    cout << getMax(string1, string2) << endl;

    test *t = new test();
    t->change();

}


