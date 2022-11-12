/*
Passing By Value and Reference

Value
We can see here 2 type of passing arguments to function: 1.by value 2.by reference
We can see that when we are pssing the argument by value there is a placement of the arg x=a, y=b and the swap occurs on those vars
so when the function ends those vars die and the swap itself don't occur actually on x and b

Reference
On the other side we can se that when we are pssing the variables by reference it is like 2 new pointers created by the function
the vars is &x, &y that are actually pointers that pointing into the vars a and b. Because of that on the swap occurs, it is affect
the values inside the original variables a.b itself therefore when the function done an x,y die we get a real swap of a and b

Defining &var
the ampersent (&var1) is like a decleration of a pointer but insted of using real pointer (int * p) that we have to access the
value inside him by calling *p we just access var1 and the we get access to the value.
In the lase example we can see that we are creating a new variable &c = a. Actually we are creating a pointer on the stack that 
pointing into a therefore by changing thae value of c or a we are actually changing the value of both of them.
*/


#include <iostream>
using namespace std;

void swap_by_reference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void swap_by_value(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}


int main() {
    int a = 1;
    int b = 2;
    cout << "before swaps                " << "a: " << a << " b: " << b << endl;
    swap_by_value(a, b);
    cout << "after swap by value         " << "a: " << a << " b: " << b << endl;
    swap_by_reference(a,b);
    cout << "after swap by reference     " << "a: " << a << " b: " << b << endl;


    int& c = a;
    c = 3;
    a = 4;

    cout << "see the values of &c a      " << "a: " << a << " c: " << c << endl;

}