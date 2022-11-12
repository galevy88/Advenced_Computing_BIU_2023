/*
Constructor and Destructor

We can see here we first declared about the consturcors in the class and also included an implementation of the destructor
Furthermore we can see that the implementation of the constructors is outside the class and the way it is worked is by
first calling the implementation Point::Point(int x, int y) : m_x(x), m_y(y). The compiler knows that m_x, m_y are the fields
of the class therefore it allowing the placement of the ints x,y into them.
*/


#include <iostream>
using namespace std;

class Point {
    private:
    int m_x, m_y;

    public:
    Point();
    Point(int x, int y);
    ~Point() {
        cout << "Deleting Point " << m_x << "," << m_y << endl;
    }
};

Point::Point() : m_x(0), m_y(0) {
    cout << "Default Point" << endl;
}

Point::Point(int x, int y) : m_x(x), m_y(y) {
    cout << "A Point" << x << "," << y << endl;
}