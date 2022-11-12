/*
Constructor and default constructor - MAIN

Here we can see that we are initialsizng p1 with argument and it means we are calling to constructor of the class
After it we are calling the default constructor and the logic is that he initilise m_x =0 and m_y = 0 as we implemented
Furthermore in order to include the cpp file of the class we wrote #include "Point_constructor.cpp"

*/

#include "Point_constructor.cpp"

int main() {
    Point p1(1,2);
    p1.foo();

    Point p2;
    p2.foo();
}