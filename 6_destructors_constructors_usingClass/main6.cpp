/*
Constructor and Destructors

We can see here that we are creating 2 objects of thte class one of the with constructor and the second with default constructor
Furthermore we can see that the order of destruction is like mirror image of the order of creation

Default Point           1
Default Point           2
Default LIne            3
A Point1,3              4
A Point2,4              5
A Line                  6
Deleting a Line         6
Deleting Point 2,4      5
Deleting Point 1,3      4
Deleting a Line         3
Deleting Point 0,0      2
Deleting Point 0,0      1
*/


#include <iostream>
#include "LineClass6.cpp"

using namespace std;

int main() {
    Line l1;
    Line l2(1,2,3,4);
}