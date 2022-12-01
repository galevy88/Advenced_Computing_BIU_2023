/*
Namespaces as their name are saved name (words) that was declared in the same piece of code or in another piece of code and they used for resamble set of operations.
In this case we cann see the std namespace that mainly integrated into cpp language. Also we can see a declration of Priner namespace that allows us to print like Python
The Priner namespace has a function called print and this function used template for printing whatever we want to send to.


*/

#include <iostream>
#include <string>

using namespace std;

namespace Printer {
    template <class T>
    void print(const T& txt) {
        cout << txt << endl;
    }
}

using namespace Printer;

int main() {
string prompt = "HELLO";
int x = prompt.length();
print(prompt);
print(x);
}
