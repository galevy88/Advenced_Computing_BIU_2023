/*
cout cin and their usecases


In this code we are creating a new class Point and indeed we can see that all the abbilities: Members/functions are public
and that means that we can access them from outside of the class.
We are creating a new object Point and setting his members m_x m_y with an arguments.
After it we calling a public function foo in order to print the members.
After it we changing the members from the main and indeed it is possible due to the fact that the members are public
After it we are calling foo function once again and indeed we can see that the members has been changed.
*/

#include <iostream>

using namespace std;

class Point {
    public:
    int m_x, m_y;
    void foo() {
    cout << m_x << " " << m_y << endl;
    }
};

int main() {
    Point p;
    p.m_x = 1;
    p.m_y = 2;
    p.foo();
    cout << "Enter new values x,y: ";
    cin >> p.m_x >> p.m_y;
    p.foo();

    return 0;
}