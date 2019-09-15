//
// Created by 沙韬伟 on 2019-09-15.
//

#include "iostream"

using namespace std;

int calculateCuboid(int, int, int);

int calcualteCylinder(int, int);

int calculateCone(int, int);

int calculateCuboid(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}

int calcualteCylinder(int num1, int num2) {
    return 3.14 * num1 * num1 * num2;
}

int calculateCone(int num1, int num2) {
    return num1 * num2 / 3;
}