#include <iostream>

int case00() {
    int age = 20;
    float price = 2.3f;
    const double weight = 128;

    // 常量不可变
//    weight = 134;
    std::cout << "this man's age" << age
              << " ,this's young, the price of the bread is " << price
              << ", the weight is " << weight
              << std::endl;
    return 0;
}