#include <iostream>
#include <math.h>
#include <conio.h>

// this points to current object

class Complex
{
private:
    int real;
    int imag;
public:
    // 3 parameters: this, r, i
    void setComplex(int r, int i)
    {
        real = r; // this -> real=r
        imag = i;
    }
};

int main()
{
    Complex c;
    c.setComplex(3, 5);
    // this -> c
}