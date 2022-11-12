/*
Classes in cpp

There are 3 types of members/functions classifications:
1. Private - Members/functions only accessable from the class itself and not from outside
2. Protected - Members/functions only accessable from the class iitself or from inheritence classes but nor from outside
3. Public - accessable for everyone

In order to initialise a class object we have to use this syntax:
<ClassName> <ObjName> - While creatin an object in this way the object will be created on the stack and not on the heap
*/


#include <iostream>

using namespace std;

class Myclass {
private:
int m_prv_x = 1;
int prv_get_m_prv_x(){
    return m_prv_x;
}

protected:
int m_prot_x = 2;
public:
int m_pub_x = 3;

int pub_get_m_prv_x(){
    return prv_get_m_prv_x();
}
};


int main() {
    Myclass obj;
    cout << "obj.m_pub_x: " << obj.m_pub_x << "\n";
    cout << "obj.m_prv_x: " << obj.pub_get_m_prv_x() << "\n";
}