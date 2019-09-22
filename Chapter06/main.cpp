#include <iostream>
#include "case00.cpp"
#include "case01.cpp"
#include "case02.cpp"
#include "case03.cpp"
#include "summary.cpp"
#include "chatroom.cpp"

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
//    case001();

//    int i = 1;
//    int j = 2;
//    cout << "i:" << i << "j:" << j << endl;
//    swap(i,j);//交换失败，传递的是副本
//    cout << "i:" << i << "j:" << j << endl;
//    swap1(&i,&j);//交换成功，，传递的是地址
//    cout << "i:" << i << "j:" << j << endl;
//    swap2(i,j);//交换成功，传递的是本体
//    cout << "i:" << i << "j:" << j << endl;
//    int &result = sum();
//    cout << result << endl;//这边引用了一个局部变量
//    test();
//    cout << result << endl;//这边引用了一个局部变量

//        show();
    string name = "jack";
    string msg = "hello world";
    string content = chatTo(name, msg);
    cout << content << endl;

    test(1,2,3);

    return 0;
}