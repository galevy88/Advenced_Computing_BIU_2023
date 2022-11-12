/*
Constructors and Default constructors

Construcor
Here we can see an example of constructor and default constructor.
The constructor appears as <Class(Potential args)> in our case it is Point(int x, int y)
In the constructor we can can see that the constructor itself public and inside the construcor occur the 
placement of the argument that the constructor got to the prv members of the class - the fields

Default constructor
In this case we can also see that we implement our own default constructor instead of the default constructor made by the compiler
In this case we wrote a constructor that get no args at all and instead make the placement of the placholder vaule 0,0


*/

#include <iostream>
using namespace std;

class Point {
    private:
    int m_x, m_y;

    public:
    Point() { m_x = 0; m_y = 0; } // default Ctor
    Point(int x, int y) { m_x = x; m_y = y; }

    void foo() {
        cout <<"Point is: " << m_x << "," << m_y << "\n";
    }
};