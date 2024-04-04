#include <iostream>
#include <math.h>
#include <conio.h>

#ifndef BASE_H
#define BASE_H
class Base
{
private:
    int a;
protected:
    int b;
public:
    Base()
    {
        std::cout<<"Base default constructor\n";
        a=b=0;
    }
    Base(int n)
    {
        std::cout<<"Base 1 arg constructor\n";
        a=b=n;
    }
    Base(int x, int y)
    {
        std::cout<<"Base 2 args constructor\n";
        a=x; b=y;
    }
    ~Base() {
        std::cout<<"Base destructor\n";
    }
    void setA(int x)
    {a=x;}
    void setB(int y)
    {b=y;}
    int getA()
    {return a;}
    int getB()
    {return b;}
    int productAB()
    {return a*b;}
    int product()
    {
        std::cout<<"Base product\n";
        return a*b;
    }
};
#endif