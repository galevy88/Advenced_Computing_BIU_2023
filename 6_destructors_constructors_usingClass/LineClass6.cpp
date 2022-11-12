#include <iostream>
#include "PointClass6.cpp"
using namespace std;


class Line {
    private:
    Point m_p1, m_p2;

    public:
    Line() { cout << "Default LIne" << endl; }
    Line(int x1, int x2, int y1, int y2);
    ~Line();
};

Line::Line(int x1, int x2, int y1, int y2) : m_p1(x1, y1), m_p2(x2, y2) {
    cout << "A Line" << endl;
}

Line::~Line() {
    cout << "Deleting a Line" << endl;
}