#include <iostream>

using namespace std;

int main() {
    int a, b;   //a:? b:?
    a = 10;     //a:10 b:?
    b = 4;      //a:10 b:4
    a = b;      //a:4 b:4
    b = 7;      //a:4 b:7

    cout << "a:" + a;
    cout << " b:" + b;
    //Arithmetic Operators = +, -, *, /, %(Modulo)

    a += 2; //a=a+2
    cout << "a:" + a;

    //Increase operator = ++
    ++a; //a + 1
    a--; //a - 1

    // Relational and Comparison Operators
    // ==, !=, <, >, <=, >=
    
    //Logical Operators
    // !, &&, ||

    //Conditional ternary operator (?)
    //condition ? result1 : result2:

    int b, v, h;
    b = 2;
    v = 7;
    h = (a>b) ? a : b;
    //First value if true, second value if false

    cout << h << '\n';

    //Comma operator seperates two expressions

    //Bitwise Operators
    // &, |, ^, ~, <<, >>
    /*
    & = AND = Bitwise AND
    | = OR = Bitwise OR
    ^ = XOR = Bitwise exclusive OR
    ~ = NOT = Unary complement (bit inversion)
    << = SHL = shift bits left
    >> = SHR = Shift bits right
    */

   //Explicit type casting operator
   int p;
   float k = 3.14;
   p = (int) k;
   //Converts one variable to another type

   //sizeof returns byte size of an object
   int q = sizeof (char);

   //Operator have precedence over others
   /* 
    Level	Precedence group	           Operator	            Description	                        Grouping
    1	    Scope	                        ::	               scope qualifier	                Left-to-right
    2	    Postfix (unary)	                 ++ --	        postfix increment / decrement	    Left-to-right
                                            ()	                functional forms
                                            []	                    subscript
                                            . ->	            member access
    3	    Prefix (unary)	                ++ --	        prefix increment / decrement	    Right-to-left
                                            ~ !	            bitwise NOT / logical NOT
                                            + -	                unary prefix
                                            & *	            reference / dereference
                                            new delete	   allocation / deallocation
                                            sizeof	            parameter pack
                                            (type)	        C-style type-casting
    4	    Pointer-to-member	            .* ->*	            access pointer	                Left-to-right
    5	    Arithmetic: scaling	            * / %	        multiply, divide, modulo	        Left-to-right
    6	    Arithmetic: addition	        + -	              addition, subtraction	            Left-to-right
    7	    Bitwise shift	                << >>	        shift left, shift right	            Left-to-right
    8	    Relational	                    < > <= >=	        comparison operators	        Left-to-right
    9	    Equality	                    == !=	            equality / inequality	        Left-to-right
    10	    And	                            &	                    bitwise AND	                Left-to-right
    11	    Exclusive or	                ^	                    bitwise XOR	                Left-to-right
    12	    Inclusive or	                |	                    bitwise OR	                Left-to-right
    13	    Conjunction	                    &&	                    logical AND	                Left-to-right
    14	    Disjunction	                    ||	                    logical OR	                Left-to-right
    15	 Assignment-level expressions	= *= /= %= += -=   assignment / compound assignment	    Right-to-left
                                        >>= <<= &= ^= |= 
                                            ?:	                conditional operator
    16	    Sequencing	                    ,	                    comma separator	            Left-to-right */
}