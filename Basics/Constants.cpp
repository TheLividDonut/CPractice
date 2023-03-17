#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 5;
    //Literal Constants express particular values
    //Literall constants can be identified as integers, floating-point, characters, strings, boolean, pointers, and user-defined literals
    1776;
     //Numerical constants represent a whole number in decimal base
    75u; //decimal with unsigned type
    0113L; //octal with Long type
    0x4bLL; //hexadecimal with Long Long type
    465LLU; //Decimal with Unsigned Long Long type
    //Signed = declared unsigned int
    //Unsigned = either positive or 0
    //Long =  32 bits long 
    //Long Long = 64 bits long
    3.14159L; //Long double
    6.02e23f; //Float 
    //Float = Fraction represented in decimal format
    
    //String Literals
    'x';
    'z'; //Single character literals
    "Hello world";  //String literals
    //Single character is '' one quote but Strings use "" double quotes
    //Escape Code
 /*   \n = newline
    \r = carriage return
    \t = tab
    \v = vertical tab
    \b = backspace
    \f = form feed(page feed)
    \a = alert(beep)
    \' = single quote
    \" = double quote
    \? = question mark
    \\ = backslash
*/
    string x = "string expressed in \
    two lines";
    // backslash continues string onto next line

    //u = char16_t
    //U = char32_t
    //L = wchar_t
    //u8 = Literal is encoded in the executable using UTF-8
    //R = Raw string
    R"(string with \backslash)";
    //intial 'R"sequence(and a final)sequence"
    //Sequence is any sequence of characters

    //Other literals
    bool y = true;
    bool u = false;
    int* p = nullptr;
    //True, false, and nullptr(null pointer)

    return 0;
}