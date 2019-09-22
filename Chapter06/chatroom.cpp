//
// Created by Administrator on 2019/9/22.
//
#include "iostream"

using namespace std;

// toName：聊天对象，content：聊天内容
string chatTo(const string &toName, const string &content);

string chatFrom(const string &toName, const string &content);

string chatTo(const string &toName, const string &content) {
    string msg = "[you] quite speak to " + toName + " about: " + content;
    return msg;//这样返回的是局部变量，函数调用完会被回收，可能被销毁
}

int test(int a, int b, int c){
    return a+b+c;
}
// 默认参数必须从右往左定义
// int test(int a, int b=5, int c=10),可以
// int test(int a, int b=5, int c),不可以
// int test(int a=19, int b=5, int c=10),可以