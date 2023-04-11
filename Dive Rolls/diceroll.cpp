#include "die.cpp"
#include <iostream>
#include <string>

int tally[11];

void roll() {
    int roll = rollNums(6) + rollNums(6);
    tally[roll - 2]++;
}

void histogram() {
    std::string str = "";
    for(int outer = 0; outer < 11; outer++) {
        str += outer + 2;
        for(int i = 0; i < tally[outer]; i++) {
            str += "*";
        }
        str += '\n';
    }
    std::cout << str << "(:";
}
void initiate() {
    for(int i = 0; i < 11; i++) {
        tally[i] = 0;
    }
    for(int i = 0; i < 100; i++) {
        roll();
    }
    histogram();
}
int main() {
    initiate();
    std::cout << "Done";
    return 0;
}