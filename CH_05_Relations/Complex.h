#include <iostream>
#include <math.h>
#include <conio.h>
// Complete Complex Class
class Complex
{
private: // by default private
    float real;
    float imag;
    static int counter;
public:
    Complex();                 // constructor without parameters 'default constructor'
    Complex(float r);          // constructor with one input parameter
    Complex(float r, float i); // constructor with two input parameters
    ~Complex();              // Destructor: only one for each class
    void   setReal(float r); // Setter for the real attribute
    void   setImag(float i); // Setter for the imag attribute
    float  getReal();        // getter for the real attribute
    float  getImag();        // getter for the imag attribute
    Complex add(Complex c);  // a member to perform addition behavior
    Complex sub(Complex c);  // a member to perform subtraction behavior
    void   print();          // a member to perform printing behavior
    void setComplex(float r, float i); // set both
    static int getCounter();
    Complex operator + (Complex c);
    Complex operator + (float x);
    Complex operator - (Complex c);
    Complex operator - (float x);
    Complex operator ++ ();       // prefix
    Complex operator ++ (int);    // postfix
    bool    operator == (const Complex &c);
    Complex operator += (const Complex &c);
    operator float() const;       // casting

friend Complex addTo(float v, Complex c);
friend Complex operator + (float x, Complex c);
friend Complex operator - (float x, Complex c);
};

int Complex::counter=0;

Complex::Complex()
{
    counter++;
    real = 0;
    imag = 0;
    std::cout<<"This is the default constructor"<<std::endl;
}

Complex::Complex(float r)
{
    counter++;
    real = imag = r;
    std::cout<<"This is the overloaded constructor, with one parameter"<<std::endl;
}

Complex::Complex(float r, float i)
{
    counter++;
    real = r;
    imag = i;
    std::cout<<"This is the overloaded constructor, with two parameter"<<std::endl;
}

Complex::~Complex()
{
    counter--;
    std::cout<<"the object destructor"<<std::endl;
}

void Complex::setReal(float r)
{
    real = r;
}

void Complex::setImag(float i)
{
    imag = i;
}

void Complex::setComplex(float r, float i)
{
    real = r;
    imag = i;
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

Complex Complex:: add (Complex c)
{
    Complex temp;
    temp.real = real + c.getReal();
    temp.imag = imag + c.getImag();
    return temp;
}

Complex Complex:: sub (Complex c)
{
    Complex temp;
    temp.real = real - c.getReal();
    temp.imag = imag - c.getImag();
    return temp;
}

int Complex:: getCounter ()
{
    return counter;
}

Complex Complex::operator + (Complex c)
{
    Complex b;
    b.real = real + c.real;
    b.imag = imag + c.imag;
    return b;
}

Complex Complex::operator + (float x)
{
    Complex b;
    b.real = real + x;
    b.imag = imag;
    return b;
}

Complex Complex::operator - (Complex c)
{
    Complex b;
    b.real = real - c.real;
    b.imag = imag - c.imag;
    return b;
}

Complex Complex::operator - (float x)
{
    Complex b;
    b.real = real - x;
    b.imag = imag;
    return b;
}

Complex Complex::operator ++ ()
{
    real++;
    return *this;
}

Complex Complex::operator ++ (int)
{
    Complex temp = *this;
    real++;
    return temp; // return old value
}

Complex::operator float() const
{
    return real;
}

bool Complex::operator == (const Complex &c)
{
    if(real == c.real && imag == c.imag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Complex Complex::operator += (const Complex &c)
{
    this -> real = this -> real + c.real;
    this -> imag = this -> imag + c.imag;
    return *this;
}