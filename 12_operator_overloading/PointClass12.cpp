/*

Operator overloading

In this example we can see how to use operator overloading for two purposes: 1. +operator 2. <<operator
Usually we used + to add two int/float but here we implemented a code that add two point by their x,y values.
First we created a method in the Point class that use "operator+" (specified the operator) and after it the argument (Point p1)
The method get a point and because we already inside a point object we have the abillity to access his members m_x, m_y and
add them to p1 members that we retrieved by getter.
In the end we returned a new Point object.

After it we wanted to implement an operator overloading for << symbol used usually to print.
We created os object (ostream) that used to be the argument of the cout object.
The way we created this object is by implement an operator overloading method with a Point argument that retrieved the x,y values
of the Point and then return them as an os object (return os << point.getX() << "," << point.getY())
*/


#include <iostream>
using namespace std;
class Point {
    private:
    int m_x, m_y;
    public:
    int getX() const { return m_x; }
    int getY() const { return m_y; }
    Point (int x, int y) : m_x(x), m_y(y) {}
    const Point operator+(const Point p1) const;
};

const Point Point:: operator+(const Point p1) const {
    cout << m_x << "," << m_y << "+" << p1.getX() << "," << p1.getY() << endl;
    return Point((m_x+p1.m_x),(m_y+p1.m_y));
    }

ostream& operator<<(ostream& os, const Point &point) {
    return os << point.getX() << "," << point.getY();
    }
