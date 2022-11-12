/*
get and set logic

In this code we can see that currently the members are private and that's mean that we can't access them from outside.
In order to acess them we are declaring public SET and GET functions.


Default Constructor
In this case we can see that we call foo before we initialise the parameters of Point and it is possible due to Default constructor
that Initialise the parameters with a placeholder parameters. 
*/


# include <iostream>
using namespace std;

class Point {
    private:
    int m_x, m_y;
    public:
    int getX() { return m_x; }
    void setX(int x) { m_x = x; }
    int getY() { return m_y; }
    void setY(int y) { m_y = y; }

    void foo() {
    cout << m_x << " " << m_y << endl;
    }
};

int main() {
    Point p;
    p.foo();
    //p.m_x = 1; Inaccessible: PRIVATE
    p.setX(1);
    p.setY(2);
    p.foo();

    return 0;
}