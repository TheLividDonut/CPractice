#include <iostream>

using namespace std;

int main() {
    int a, b;
    int result;
    //declaration of variables
    int foo = 0;
    auto bar = foo;
    // Auto sets the type as the same as the value
    decltype(foo) bar;
    //Decltype sets the type to the same as the included variable

    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;
    //process

    cout << result;
    //Printing results

    return 0;
    //Terminate Program
}

//C-like initialization = "type identifier = initial value"
//constructor initialization = "type identifier (initial value)"
//uniform initialization = "type indentifier {initial value}"
//All initializations are equal