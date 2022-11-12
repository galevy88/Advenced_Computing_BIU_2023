
/*
Inheritance

▶ Public inheritance
    ▶ Public in parent ⇒ public in child
    ▶ Protected in parent ⇒ protected in child
    ▶ Private in parent ⇒ only accessible to parent
▶ Protected inheritance
    ▶ Public in parent ⇒ protected in child
    ▶ Protected in parent ⇒ protected in child
    ▶ Private in parent ⇒ only accessible to parent
▶ Private inheritance (default)
    ▶ Public in parent ⇒ private in child
    ▶ Protected in parent ⇒ private in child
    ▶ Private in parent ⇒ only accessible to parent

In this code we can see that the reason this code can't compile is because the fact that myA function is rpivate in the parent
and even though the class A is public in class B we can't access private functions inside the parent

*/


#include "Classes.cpp"
using namespace std;

int main (){
    B b;
    b.same();
    b.f();
    b.g();
    return 0;
}