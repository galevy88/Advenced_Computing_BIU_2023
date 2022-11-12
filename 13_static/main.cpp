/*

Static

Static is a way to add attributes to class itself and not directly to the object of the class.
In this case we implement Student class that creating a students objects and assign their maxGrade to a field.
Furthermore, there are also static filed of the class, thats mean that we can access them without using any object but using the
name of the class itself.
Every student holds his score and also the Student class holds the number of the student and the max grade among all the students

We must initialise the static field of the class in order to create an object of the class.
*/



#include <iostream>
#include "Student13.cpp"
using namespace std;


int Student::nofStudents = 0;
int Student::maxGrade = 0;

int main() {
Student Moshe(75);
Student Dan(85);
Student Zila(97);
Student Rina(92);


cout << Student::get_nofStudent() << "\n";
cout << Student::get_max_grade();
return 0;
}