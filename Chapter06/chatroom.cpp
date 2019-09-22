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
    return msg;
}

string chatFrom() {

}