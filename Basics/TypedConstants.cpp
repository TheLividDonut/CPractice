#include <iostream>

using namespace std;

//const double pi = 3.14159;
//const char newline = '\n';
//Giving Constants Variable Names

#define PI 3.14159
#define NEWLINE '\n'
//Defining Constants without variable names
//preprocessor directives don't require ; at the end

int main() {
    double r= 5.0; //Radius
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

    return 0;
}