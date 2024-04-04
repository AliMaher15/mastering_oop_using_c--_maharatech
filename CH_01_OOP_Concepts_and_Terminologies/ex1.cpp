#include <iostream>
#include <math.h>
#include <conio.h>
#include "Complex.h"


Complex add(Complex myComp1,Complex myComp2) 
{
    return myComp1.add(myComp2);
}
Complex subtract(Complex myComp1,Complex myComp2) 
{
    return myComp1.sub(myComp2);
}

// main function to test
int main()
{
    std::cout<<"Complex Class Test"<<std::endl;
    Complex myComp1, myComp2, resultComp;
    // Read Real & Imag parts for myComp1 & myComp2 from the user
    float c1r,c1i,c2r,c2i;

    std::cout<<"enter myComp1 real: ";
    std::cin>>c1r;
    std::cout<<"enter myComp1 imag: ";
    std::cin>>c1i;
    std::cout<<"enter myComp2 real: ";
    std::cin>>c2r;
    std::cout<<"enter myComp2 imag: ";
    std::cin>>c2i;

    myComp1.setReal (c1r);
    myComp1.setImag (c1i);
    myComp2.setReal (c2r);
    myComp2.setImag (c2i);

    resultComp = add(myComp1,myComp2);
    std::cout<<"Addition Result: ";
    resultComp.print();

    resultComp = subtract(myComp1,myComp2);
    std::cout<<"Subtraction Result: ";
    resultComp.print();

    return 0;
}

