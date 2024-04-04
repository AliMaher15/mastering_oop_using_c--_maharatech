#include <iostream>
#include <math.h>
#include <conio.h>
#include "Base.h"
#include "Derived.h"
#include "SecondDerived.h"

int main ()
{
    Base bo(5,4);
    Derived obj;
    std::cout<<"bo: ";
    std::cout<<bo.product()<<std::endl;
    std::cout<<"obj: ";
    std::cout<<obj.product()<<std::endl;
}