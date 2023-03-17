#include <iostream>
#include <string>
#include <sstream> //String stream

using namespace std;

int x = 5;

void intInput() {
    int i;
    cout << "Please enter a integer value: ";
    cin >> i; 
    //Takes input value, same as a scanner would
    cout << "The value you entered is " << i;
    cout << " and its double is " << i*2 << ".\n";
}
void stringInput() {
    string mystr;
    cout << "What's your name";
    getline(cin, mystr);
    //Reads line from the console and turns it into a string
    cout << "hello " << mystr << ".\n";
    cout << "What's your favorite team? ";
    getline(cin, mystr);
    //Replaces previous value of mystr
    cout << "I like " << mystr << " too!\n";
}
void stringStream() {
    //String Streams allows strings to be treated as streams so they can be converted into numerical values
    string mystr;
    float price = 0;
    int quantity = 0;
    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    //converts mystr string into a price(integer)
    cout << "Enter quantity: ";
    getline(cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
}

int main() {
    //Standard Output = cout
    cout << "Output sentence";
    cout << 120;
    cout << x;
    cout << "I am " << x << "years old";  //All on one line, << replaces +

    //Standard Input = cin
    int age;
    cin >> age; //Arrows are flipped around
    intInput;
    stringInput;
    stringStream;
}