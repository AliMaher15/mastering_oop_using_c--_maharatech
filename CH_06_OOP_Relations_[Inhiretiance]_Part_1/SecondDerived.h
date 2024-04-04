#include <iostream>
#include <math.h>
#include <conio.h>
#include "Base.h"
#include "Derived.h"

#ifndef SECONDDERIVED_H
#define SECONDDERIVED_H
class SecondDerived : public Derived
{
private:
    int d;
public:
    ~SecondDerived() {
        std::cout<<"SecondDerived destructor\n"; 
    }
    SecondDerived(): Derived()
    {
        std::cout<<"SecondDerived default constructor\n";  
        d=0;
    }
    SecondDerived (int n) : Derived(n)
    {
        std::cout<<"SecondDerived 1 arg constructor\n";  
        d=n;
    }
    SecondDerived(int x, int y, int m, int z) : Derived(x,y,m)
    {
        std::cout<<"SecondDerived 4 arg constructor\n"; 
        d=z;
    }
    void setD(int z)
    {d=z;}
    int getD()
    {return d;}
    int product() // overriding
    {
        std::cout<<"SecondDerived product\n";
        //return  a*b*c*d;
        return getA() * b *  getC() * d;
    }
};
#endif