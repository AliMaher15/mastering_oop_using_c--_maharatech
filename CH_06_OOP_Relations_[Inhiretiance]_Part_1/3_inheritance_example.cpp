#include <iostream>
#include <math.h>
#include <conio.h>
#include "Base.h"
#include "Derived.h"
#include "SecondDerived.h"

int main ()
{
    Derived obj1;
    obj1.setA(3);
    obj1.setB(7);
    obj1.setC(2);
    std::cout<<"obj1: "<<obj1.productAB()<<std::endl;
    std::cout<<"obj1: "<<obj1.productABC()<<std::endl;

    /*Base b(5,4);
    b.setA(3);
    b.setB(7);
    //b.setC(2);
    std::cout<<"b: "<<b.productAB()<<std::endl;
    //std::cout<<"b: "<<b.productABC()<<std::endl;
    */
}