//
// Created by 沙韬伟 on 2019-09-11.
//
#include "iostream"
#include <vector>
#include "algorithm"

using namespace std;

void case020() {
    vector<double> vec = {98.5, 123.3, 12, 31.2};
    vector<string> vec1 = {"hello", "world", "char"};
    string s[] = {"a", "b", "v"};

    /*在数组的尾部插入一个数据*/
    vec.push_back(23.2);
    /*遍历方法1*/
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << endl;
    }
    cout << "_________________" << endl;
    /*遍历方法2*/
    //集合通用迭代器，iterator
    vector<double>::iterator it;//得到迭代器对象，实际上是一个指针对象
    //从第一个元素开始迭代：it.begin
    for (it = vec.begin(); it != vec.end(); ++it) {//it++是重载
        cout << *it << endl;//*的意思是取it指针的地址所对应的值
    }
    cout << "_________________" << endl;
    // 排序
    sort(vec.begin(), vec.end());
    // 是否需要倒序处理
    reverse(vec.begin(), vec.end());
    for (it = vec.begin(); it != vec.end(); it++) {
        cout << *it << endl;
    }
}