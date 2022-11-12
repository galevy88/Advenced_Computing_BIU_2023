#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

class Point {
    int m_x, m_y;
    char m_name[5];
    public:
        Point(int x, int y, const char* name): m_x(x), m_y(y) {
            SetName(name);
        }
        void SetName(const char* name);
        const char* GetName() const { return m_name; }
        void Print() const {
        cout << m_x << "," << m_y << endl;
        }
        };

void Point::SetName(const char* name) {
strcpy(m_name,name);
}