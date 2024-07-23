// main.cpp
#include <iostream>
#include "global.h"
using namespace std;

void example() {
    globalVar++;
    cout << globalVar << endl;
}

int main() {
    example(); // Should print 1
    example(); // Should print 2
    return 0;
}
