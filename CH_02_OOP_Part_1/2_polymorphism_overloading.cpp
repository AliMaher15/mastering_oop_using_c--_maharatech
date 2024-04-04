#include <iostream>
#include <math.h>
#include <conio.h>

class Complex
{
private: // by default private
    int real;
    int imag;
public:
    void   setComplex(int r, int i); // Setter for the real attribute
    void   setComplex(int v); // Setter for the imag attribute
    float  getReal();        // getter for the real attribute
    float  getImag();        // getter for the imag attribute
    void   print();          // a member to perform printing behavior
};
void Complex::setComplex(int r, int i)
{
    std::cout << "setComplex with 2 inputs\n";
    real = r;
    imag = i;
}
void Complex::setComplex(int v)
{
    std::cout << "setComplex with 1 input\n";
    real = imag = v;
}
float Complex::getReal()
{
    return real;
}
float Complex::getImag()
{
    return imag;
}
void Complex::print()
{
    if (imag<0) {
        std::cout<<real<<" - "<<std::fabs(imag)<<"i"<<std::endl;
    } else {
        std::cout<<real<<" + "<<imag<<"i"<<std::endl;
    }
    
}

int main() {
    Complex c;
    c.setComplex(3,5);
    c.setComplex(5);
    return 0; 
    // Note:
    // if used default value for second argument
    // it will return an error as default arguments
    // are not considered part of the function
    // signature, so both will have
    // same name, number of args, type of args
}