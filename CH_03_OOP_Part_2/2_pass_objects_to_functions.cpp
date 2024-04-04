#include <iostream>
#include <math.h>
#include <conio.h>
#include "Complex.h"
#include "Stack.h"

void myFunc (int b) {
    // b is call by value, a copy of input
}
void myFunc (Complex b) {
    // 1. allocate in memory
    // 2. bitwise copy from object a to b

    // at the end of function: destruct b
    std::cout << "End of myFunc\n";
}

int main() 
{
    int a = 10;
    myFunc(a); 
    Complex c (5,3); // allocate then construct
    myFunc(c);
    std::cout << "End of main\n";
}