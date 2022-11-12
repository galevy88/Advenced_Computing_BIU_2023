#include <iostream>
#include "PointH.h"

using namespace std;


void Point::foo() { cout << "Pointingg Here"; }

bool Point::bar(int x, int y) { 
    if(x == y) {
    return true; 
    }
    else {
        return false;
    }
}
