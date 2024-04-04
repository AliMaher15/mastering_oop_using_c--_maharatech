#include <iostream>
#include <math.h>
#include <conio.h>

class Complex
{
private: // by default private
    int real;
    int imag;
public:
    Complex()
    {
        real = 0;
        imag = 0;
        std::cout<<"This is the default constructor"<<std::endl;
    }
    Complex(float n)
    {
        real = imag = n;
        std::cout<<"This is the overloaded constructor, with one parameter"<<std::endl;
    }
    Complex(float r, float i)
    {
        real = r;
        imag = i;
        std::cout<<"This is the overloaded constructor, with two parameter"<<std::endl;
    }
    ~Complex()
    {
        std::cout<<"the object destructor"<<std::endl;
    }
    void   setComplex(int r, int i); // Setter for the real attribute
    void   setComplex(int v); // Setter for the imag attribute
    float  getReal();        // getter for the real attribute
    float  getImag();        // getter for the imag attribute
    void   print();          // a member to perform printing behavior
};
void Complex::setComplex(int r, int i)
{
    real = r;
    imag = i;
}
void Complex::setComplex(int v)
{
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

int main()
{
    // error if only written a constructor with parameter
    // the cpp wont write its default constructor
    // so we must write our own default constructor with
    // no parameters
    Complex c1; 
    c1.print();

    Complex c2(3); // if no public constructor: error
    c2.print();
    Complex c3(3,5); // if no public constructor: error
    c3.print();
}