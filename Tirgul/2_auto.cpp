


/*
In this case we can also see that we used namespace, this time: Inputer.
We also used auto in order to get the input from the function. Auto type used when we don't know exactly which type of var we gonna use.
*/
#include <iostream>
#include <string>

using namespace std;

namespace Inputer {
    auto Input(string& str) {
        cout << str;
        string var;
        cin >> var;
        return var;
    }
}

using namespace Inputer;

int main() {
string str = "Put you text here: ";
auto var_Input = Input(str);
cout << var_Input;
}