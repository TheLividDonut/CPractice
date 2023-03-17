#include <iostream>

using namespace std;

 //Function is a group of statements that is give a name
//type name (parameter1, parameter2, ...) {statements}
int addition(int a, int b) {
    int r;
    r=a+b;
    return r;
}
//Default Values of parameters
int divide(int a, int b=2) {        
    int r;
    r=a/b;
    return (r);
}
//Recursivity
long factoral(long a) {
    if(a > 1)
        return(a * factoral(a-1));
    else
        return 1;
}
void printmessage() {
    cout << "I'm a function";
}
void duplicate (int& a, int& b, int& c) { 
    //Declares parameters as references with the *&* following the type allowing the initial variable values to be changed rather than copied
    //Const parameters are unable to be altered
    a*=2;
    b*=2;
    c*=2;
}
int main() {
   int z;
   z = addition(5,3);
   cout << "The result is " << z;
   //function can be called multiple times within a program
   printmessage();

   int x=1, y=3, c=7;
   duplicate(x,y,z);
   cout << "x=" << x << ", y=" << y << ", z=" << z;

    cout << divide(12) << '\n';
    //no second value is given but since the variable already has a value, the command runs
    cout << divide (20, 4) << '\n';
    //Two values are given so the second value override the intial variable value

    long number = 9;
    cout << number << "! = " << factoral(number);

   return 0;
    //Main is a return type int because it typically ends with the implicit return statement "return 0"
}