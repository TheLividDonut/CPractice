#include <iostream>
#include <string>

using namespace std;

int x;

int main() {
    //Flow control requires generic (sub)statements
    //Either Single instruction or a compount statement
    //Compound Statements are a group of statements grouped in a block
    //{statement 1; statement 2; statement 3}

    //if statement
    if (x == 100 ) { //(condition)
        cout << "x is 100";
    }
    //Another way
    if (x == 100) { cout << "x is 100"; }

    //If else statements
    if(x == 100) 
        cout << "x is 100";
    else 
        cout << "x is not 100";
    //No brackets are needed if there is only 1 line after the statement

    //while loop   
    int n = 10;
    while(n>0) {
        cout << n << ", ";
        n--;
    }
    cout << "liftoff!\n";

    //Do-while loop
    //do statement while (condition)
    string str;
    do {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodbye");

    //For loop
    //for (intialization; condition; increase) statement
    for(int i = 10; i > 0; n--) {
        cout << i << ", ";
    }
    cout << "liftoff!\n";
    //without a condition, the condition is equal to true (infinite loop)
    //no intialization if the variable was intialized before the loop
    //Can have multiple variables in the intialization
    
    //range-based loop (for-each loop)
    string strng {"Hello!"};
    for(char c : str) { //char = characters 
        cout << "[" << c << "]";
    }
    cout << '\n';

    //Jump statements
    for(int p=10; p>0; p--) {
        cout << p << ", ";
        if(n == 3) {
            cout << "countdown aborted";
            break;
            //break leaves a loop even if the condition isn't met
        }
    }

    for(int p=10; p>0; p--) {
        cout << p << ", ";
        if(n == 3) continue;
        cout << p << ", ";
        //continue skips the rest of the loop and moves onto the next loop
    }

    //goto loop
    int u = 10;
    mylabel: //a jump destination point in a loop followed by a : colon
    cout << u << ", ";
    u--;
    if(u>0) goto mylabel;
    cout << "liftoff!\n";

    //Switch statement
    /* 
    code>switch (expression) {
        case 1:
        cout
        "x is 1";
        break;
        case 2:
        cout
        "x is 2";
        break;
        default:
        cout
        "calue of x unknown"; 
        }
        /code>
    */

   switch(x) {
    case 1:
    case 2:
    case 3:
    cout << "x is 1, 2, or 3";
    break;
    default:
    cout << "x is not 1, 2, nor 3";
   }
    
}
