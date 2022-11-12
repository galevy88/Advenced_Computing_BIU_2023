#include <iostream>


int main() {
    int size = 4;
    int* p = new int[size];
    p[1] = 1;
    p[2] = 2;
    p++;
    *p = 11;
    p++;
    *p = 22;
    p--; p--;
    *p = 0;
    

    delete[] p;
}