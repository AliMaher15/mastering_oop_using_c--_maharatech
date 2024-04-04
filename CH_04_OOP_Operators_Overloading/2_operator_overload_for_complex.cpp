#include <iostream>
#include <math.h>
#include <conio.h>
#include "Complex.h"
#include "Stack.h"

// Operator Overload for Complex
Complex operator + (float x, Complex c)
{
    Complex b;
    b.real = c.real + x;
    b.imag = c.imag;
    return b;
}

Complex operator - (float x, Complex c)
{
    Complex b;
    b.real = x - c.real;
    b.imag = c.imag;
    return b;
}

int main() {
    Complex c1(10,3);
    Complex c2(5,2);
    Complex c3;

    c3 = c1 + c2; // need to overload "+" operator
    c3.print();
    c3 = c1 + 5;  // another shape of operator overload
    c3.print();
    c3 = 5 + c2; // need stand alone functions
    c3.print();

    c3 = c1 - c2;
    c3.print();

    c3 = c1 - 5;
    c3.print();

    c3 = 5 - c1;
    c3.print();

    float x = (float) c1;
    std::cout << "float x = " << x << std::endl;
}