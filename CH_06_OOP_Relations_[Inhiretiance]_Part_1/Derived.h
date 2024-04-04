#include <iostream>
#include <math.h>
#include <conio.h>
#include "Base.h"

#ifndef DERIVED_H
#define DERIVED_H
class Derived : public Base
{
private:
    int c;
public:
    ~Derived() 
    {
        std::cout<<"Derived destructor\n";
    }
    Derived(): Base()
    {
        std::cout<<"Derived default constructor\n";    
        c=0;
    }
    Derived (int n) : Base(n)
    {
        std::cout<<"Derived 1 arg constructor\n";
        c=n;
    }
    Derived(int x, int y, int z) : Base(x,y)
    {
        std::cout<<"Derived 3 arg constructor\n";
        c=z;
    }
    void setC(int z)
    {c=z;}
    int getC()
    {return c;}
    int productABC()
    {
        return  getA()*b*c; // after b is protected
        //return productAB() * c;
    }
    int product()
    {
        std::cout<<"Derived product\n";
        //return getA()*b*c;
         return Base::product()*c; // return this->Base::product()*c;
    }
};
#endif