#include <iostream>
#include <math.h>
#include <conio.h>
#include "Complex.h"
#include "Stack.h"

Complex addToo (float v, Complex c) {
    std::cout<<"addToo\n";
    Complex b;
    b.setReal(c.getReal()+v);
    //b.real and c.real : error, can't use class attributes
    // need to define the standalone function as friend
    return b;
}

Complex addTo (float v, Complex c) {
    std::cout<<"addTo\n";
    Complex b;
    b.real = c.real + v;
    return b;
}

int main() {
    Complex a(2,5);
    a=addToo(4,a);
    a.print();
    a=addTo(4, a);
    a.print();
}