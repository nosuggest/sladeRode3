#include <iostream>
#include "Case01.cpp"
#include "Case02.cpp"
#include "LandOwner.cpp"
#include "Student.cpp"
#include "LandOwners.cpp"
#include "Teacher.cpp"

using namespace std;

int main() {
//    int a = 10;
//    int b = 20;
//    swap(a, b);
//    cout << "a:" << a << endl;
//    cout << "b:" << b << endl;
//
//    float c = 1.0;
//    float d = 2.0;
//    Swap(c, d);
//    cout << "c:" << c << endl;
//    cout << "d:" << d << endl;
//
//    cout << "________________________________________" << endl;
//    int nums[] = {2, 1, 5, 4, 7, 8};
//    sort(nums, 6);
//    print(nums, 6);
//
//    cout << "________________________________________" << endl;
//    float numsf[] = {1.1, 3.2, 2.1, 2.5, 4.3, 2.0};
//    sort(numsf, 6);
//    print(numsf, 6);

//数据类型查询
//    cout << typeid(PI).name() << endl;
//    cout << typeid(string).name() << endl;

//    Case02 case02;//申明了一个case02类型的变量
//    //调用对象的成员方法
//    case02.TouchCard(10);
//    case02.ShowScore();

    //不可变更私有变量
//    case02.score=20;


//    LandOwner landOwner;
//    cout << "the name is " << landOwner.getName() << endl;
//    landOwner.showScore();
//    landOwner.setScore(100);
//    landOwner.showScore();
//
//    landOwner.setScore(-100.0);
//    landOwner.showScore();

////  代参构造
//    Student student("jack", 20, 98);
//    cout << student.getMoney() << endl;
////  无参构造
//    Student student1;
//    cout << student1.getMoney() << endl;
//
//    student.gainMoney(20);
//
////    指针类型
//    Student *student2 = new Student("robbin", 28, 77);//堆内存内分配空间
//    // student2是一个地址
//    cout << student2 << endl;
//    // student2地址内gain方法
//    student2->gainMoney(1);
//
//    // 先销毁student1，后销毁student，弹栈顺序
//    delete student2;//加了delete的话，先进行释放，再进行栈内存释放

//    LandOwners *ptr_landOwners = new LandOwners;
//    ptr_landOwners->showInfo();
//
//    LandOwners *ptr_landOwners1 = new LandOwners("jack");
//    ptr_landOwners1->showInfo();
//
//    LandOwners *ptr_landOwners2 = new LandOwners(10, 20);
//    ptr_landOwners2->showInfo();

//    LandOwners *ptr_landOwners3 = new LandOwners("jack", "man", 300, 21);
//    ptr_landOwners3->showInfo();
//    ptr_landOwners3->touchCard(25);

//    delete ptr_landOwners;
//    delete ptr_landOwners1;
//    delete ptr_landOwners2;
//    delete ptr_landOwners3;

    Teacher *teacher = new Teacher("马云",40);
    teacher->addScore(59);
    teacher->addScore(97);
    teacher->addScore(88);
    teacher->showInfo();
}