#include <iostream>
#include <typeinfo>

void intInput(int x) {
    std::string reverse = "";
    std::string str = std::to_string(x);
    for(int i = str.length(); i >= 0; i--) {
        reverse += str[i];
        std::cout << str[i] << " ";
    }
    std::cout << reverse << '\n';
}

void stringInput(std::string str) {
    std::string reverse = "";
    for(int i = str.length(); i >= 0; i--) {
        reverse += str[i];
    }
    std::cout << reverse << '\n';
}



int main() {
    int x;
    int t = -1;
    std::string str;
    std::cout << "Enter 1 to stop, 2 for string reversal, 3 for int reversal" << '\n';
    INITIALIZATION:std::cin >> x;
    if(x == 1) { 
        goto END;
    }
    else if(x == 2) {
        t == 1;
    }
    else if(x == 3) {
        t == 0;
    }
    else {
        std::cout << "Invalid #, try again \n";
        goto INITIALIZATION;
    }
    RESTART:std::cout << "Enter value you wish to reverse" << '\n';
    switch(t) {
        case(1): {
            std::cin >> str;
            stringInput(str);
            break;
        }
        default: {
            std::cin >> x;
            intInput(x);
            break;
        }
    }
    std::cout << "Do you wish to continue? Enter 1 to continue, Enter 2 to stop \n";
    std::cin >> x;
    if(x == 1) {
        goto RESTART;
    }
    else if(x == 2) {
        goto END;
    }
    END: return 0;
}

