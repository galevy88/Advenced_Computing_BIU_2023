/*
const Pointers

P
we can see here that p is a non const pointer at all. It means that we can change the pointer pointing and also the value of the
heap variable the pointer pointing to.

PC
we can see that pc is a const pointer only to the heap variable he is holding. It means that we can change the pointing of te pointer
but we can't change the value of the variable that the pointer pointing to

CP
we can see that cp is a const pointer only to the pointing matter. It means that we can easily change the value of the heap variable
that the pointer pointing to but we can't change the pointing of the pointer to another place on the heap (can't do placement)

CPC
we can see that cpc is a const pointer both for heap value and both for pointing. It means that once crate this pointer can't change
at all.
*/

#include <iostream>


int main() {
int* p;
p = new int;
*p = 7;
*p = 8;

int* pc;
pc = new int;
pc = p;

int* const cp = new int;
*cp = 1;
*cp = 2;

const int* const cpc = new int(3);


}