#include <iostream>
#include <math.h>
#include <conio.h>
#include "Complex.h"
#include "Stack.h"


// VID01: Equal operator overload for Stack
int main() {
    int x=5;
    int y=7;
    y=x; // copy
    std::cout<<x; // 5
    std::cout<<y; // 5
    x=3;
    std::cout<<x; // 3
    std::cout<<y; // 5

    Stack s1(3);
    Stack s2(2);

    s2 = s1; // shallow (bitwise) copy, pointer will point at same address
    // fix by operator overload, adding operator "=" function in Stack class

    Stack s3=s2=s1;
}