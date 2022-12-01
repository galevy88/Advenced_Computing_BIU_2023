/*
Templates is like a generics and the use of it is to allow conveying multiple types of vars without specifing the type exactly.
In this case for example we can see that we alowing transfer both int and float to Sawp function in this is due to the fact
That we specified a generic class T as a template and we metioned in the signature of the funciton this generic template as T
*/


#include <iostream>
using namespace std;


template<class T>
void Swap(T& a, T& b) {
T temp = a;
a = b;
b = temp;
}


int main() {
    int x_i = 7;
    int y_i = 10;
    float x_f = 7.1;
    float y_f = 10.1;
    Swap(x_i, y_i);
    Swap(x_f, y_f);
    cout << x_i << " " << y_i << endl;
    cout << x_f << " " << y_f << endl;
}