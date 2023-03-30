#include <iostream>
#include <array>

bool soa[200];
void initArray() {
    for(int i = 0; i < 200; i++) {
        if(i == 1 || i == 2) {
            soa[i] = false;
            std::cout << i + " = false ";
        }
       else {
            soa[i] = true;
            std::cout << i + " = true";
        } 
    }
}
/* void checkValue(int ion) {
    for(int i = ion + 1; i < 200; i++) {
        if(i % ion == 0) {
            soa[i] = false;
            std::cout << soa[i];
        }
    }
} */
void checkValue() {
    for(long outer = 0; outer < 200; outer++) {
        for(long i = outer + 1; i < 200; i++) {
            if(i % outer == 0) {
                soa[i] = false;
            }
        }
    }
}
int main() {
    std::cout << "Starting check";
    initArray();
    //for(int i = 0; i < 200; i++) {
        //checkValue(3);
         //std::cout << soa[9];
    //}
    checkValue();
    std::cout << '\n';
    for(int i = 0; i < 200; i++) {
        std::cout << i + " ";
    }
} 