

/*
The best Example is in the following image attached to this directory.
We can see that we init int var called value with 0. after it e init ptr pointer to point to the place in the memory of value. 
After it we init new var to hold the value of ptr (other_value = *ptr)
we changed the value of ptr to be 5 and it means because of ptr is opinting to value var we actually changed the value of the var value.
We can see that we didn't changed the value of the var other_value therefore they have a different value because the are 2 seperate piece of memory.

*/

#include <iostream>
#include <string>

using namespace std;

int main() {
int* ptr = nullptr;
int value = 0;
ptr  = &value;
int other_value = *ptr;
*ptr = 5;
cout << *ptr << endl;
cout << &value << " " << &other_value;
}