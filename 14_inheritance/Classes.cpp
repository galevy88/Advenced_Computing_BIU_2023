
#include <iostream>
using namespace std;


class A {
    private:
        void myA() {cout<<"cannot";}
    public:
        void same() {cout<<"A::same";}
        void f() {cout<<"A::f()";}
        int g() {return 0;}
    };
class B : public A {
    public:
        void f() {cout<<"B::f()";}
        int g() {return A::g()+1;}
        // void myB() {cout<<"B, "; myA(); } Compilation Error! myA is private in parent
};
