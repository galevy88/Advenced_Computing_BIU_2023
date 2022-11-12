#include <iostream>
#include "Pointclass12.cpp"

int main() {
    const Point p1(1,2), p2(3,5);

    Point temp = p1+p2+p1;
    cout << temp << endl;

    return 0;
}