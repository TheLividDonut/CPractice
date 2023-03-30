#include <iostream>
#include <array>

bool soa[200];
void initArray() {
    for(int i = 0; i < 200; i++) {
        if(i == 1 || i == 2) {
            soa[i] = false;
        }
       else {
            soa[i] = true;
        } 
    }
}

void checkValue() {
    for(long outer = 2; outer < 200; outer++) {
        for(long i = outer + 1; i < 200; i++) {
            if(i % outer == 0) {
                soa[i] = false;
            }
        }
    }
}

void returnBool(int index) {
    if(soa[index] == 1) {
        std::cout << "True";
    }
    else {
        std::cout << "False";
    }
}

int main() {
    initArray();
    checkValue();
    for(int i = 0; i < 200; i++) {
        std::cout << i + 1 << " ";
        returnBool(i);
        std::cout << '\n';
    }
} 