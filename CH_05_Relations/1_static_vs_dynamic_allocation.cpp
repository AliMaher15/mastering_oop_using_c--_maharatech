#include <iostream>
#include "Complex.h"

// VID01: Static vs Dynamic Allocation 

int main()
{
    // Static Allocation:
    std::cout << "\nStatic Allocation - Method 1:\n";
    // array of objects (call default constructor)
    Complex carr[10]; 
    std::cout << "\nStatic Allocation - Method 2:\n";
    // the rest will use default constructor
    Complex carr2[5] = {Complex(2,4), Complex(), Complex(8)};
    
    // Dynamic Allocation:
    Complex * cptr; // pointer to object or array?
    std::cout << "\nDynamic Allocation - Method 1:\n";
    // pointer to just one object
    cptr = new Complex(2.1,7.3); 
    std::cout << "\nDynamic Allocation - Method 2:\n";
    // allocate 12 objects with default constructor   
    cptr = new Complex[12]; 
}