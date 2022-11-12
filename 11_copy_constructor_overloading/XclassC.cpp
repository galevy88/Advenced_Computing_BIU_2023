/*
Copy Constructor - Operator Overloadig

Usually when we are using = operator we are aiming to make a placement to one variable with another.
When we are using operator overloading we can declare double meaning to one symbol. In that case the = operator
got new meaning. Insted of make a placement that will copy only the stack variables like shallow cloning, we implement
a method that launch deep cloning of the object and creating a new pointer with a diffrent location on the heap therefore
at the time of change of the pointer's value, it will ot affect the value of the cloning object

In this case we created a function with a return type of &X. It means that the new object will get a brand new object type.
Furthermore, we implemented the "operator=" syntax and that means that the operator that designated for this operation is "=" 
so every time the = operator is appear in a placement instead of doing a placement, this function will be call.
After it in the arguments we got the pointer of the object we want to clone and then we created a new pointer that hold the value
that we want.
*/

# include <iostream>
using namespace std; 
class X { 
     public: 
     int *pi; 
     X(){}  
     X(const X &obj) { 
        pi = new int;
        *(pi) = *(obj.pi);
        }

     X& operator=(const X &x) {
        if (this == &x){ return *this; }
        delete pi;
        pi = new int;
        *pi = *x.pi;
        return *this;
     }
};
