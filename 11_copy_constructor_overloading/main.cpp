/*
Copy Constructor - Operator Overloadig

Usually when we are using = operator we are aiming to make a placement to one variable with another.
When we are using operator overloading we can declare double meaning to one symbol. In that case the = operator
got new meaning. Insted of make a placement that will copy only the stack variables like shallow cloning, we implement
a method that launch deep cloning of the object and creating a new pointer with a diffrent location on the heap therefore
at the time of change of the pointer's value, it will ot affect the value of the cloning object


*/

#include <iostream>
#include "XclassC.cpp"

int main() {
    X x;
    x.pi = new int;
    *(x.pi) = 2;

    X x2 = x;
    *(x.pi) = 20;

    cout << *(x.pi) << endl; cout << *(x2.pi) << endl;
    cout << x.pi << " " << x2.pi << endl;

    x2 = x;
    cout << x.pi << " " << x2.pi << endl;
    cout << *(x.pi) << endl; cout << *(x2.pi) << endl;
    
    *(x.pi) = 400;
    cout << *(x.pi) << endl; cout << *(x2.pi) << endl;
}