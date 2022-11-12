
/*
The need of copy Constructor


In this case we can see the problematic situation we can encounter when trying to make a placement without using a copy constructor
Indeed, we created an object x of the class X. x contains 3 fileds: 1. int 2. arr on the stack 3. pointer to heap.
when we are writing X x2 = x we are creating a new object x2 and initialise all his fields on the stack to be exactly the same
like the field that x holds. It means that indeed all the fields will be the same but it also raises a problem because also the
pointer will be the same therefore when we are changing the value in one object automatically it will change the value in the other
one because the pointer pointing to the same piece of memory in the heap
*/

#include <iostream>
#include "Xclass.cpp"
using namespace std;

int main() {
X x;
x.i = 1;
x.ai[0] = 1;
x.pi = new int;
*x.pi = 2;

X x2 = x;
x.i = 10;
x.ai[0] = 10;
*x.pi = 20;

cout << x.i << " " << x.ai[0] << " " << *(x.pi) << endl;
cout << x2.i << " " << x2.ai[0] << " " << *(x2.pi) << endl;
}