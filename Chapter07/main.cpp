#include <iostream>
#include "Case01.cpp"

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    swap(a, b);
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    float c = 1.0;
    float d = 2.0;
    Swap(c, d);
    cout << "c:" << c << endl;
    cout << "d:" << d << endl;

    cout << "________________________________________" << endl;
    int nums[] = {2, 1, 5, 4, 7, 8};
    sort(nums, 6);
    print(nums, 6);
    
    cout << "________________________________________" << endl;
    float numsf[] = {1.1, 3.2, 2.1, 2.5, 4.3, 2.0};
    sort(numsf, 6);
    print(numsf, 6);


}