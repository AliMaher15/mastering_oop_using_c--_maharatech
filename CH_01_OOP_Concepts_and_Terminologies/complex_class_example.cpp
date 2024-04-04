// VID4: Complex Class Example

// Complex Number:
/// sqrt(-ve)
/// 5+3i (real and imaginary part)

// Class name: Compex
/// Atributes:
//// real : float, private
//// imag : float, private
/// Fucntions:
//// getReal() : float
//// getImag() : float
//// setReal(float) : void
//// setImag(float) : void
//// printComplext() : void, public

#include <iostream>
#include <math.h>
#include <conio.h>
class Complex
{
private: // by default private
    float real;
    float imag;
public:
    void   setReal(float r); // Setter for the real attribute
    void   setImag(float i); // Setter for the imag attribute
    float  getReal();        // getter for the real attribute
    float  getImag();        // getter for the imag attribute
    Complex add(Complex c);  // a member to perform addition behavior
    Complex sub(Complex c);  // a member to perform subtraction behavior
    void   print();          // a member to perform printing behavior
};
void Complex::setReal(float r)
{
    real = r;
}
void Complex::setImag(float i)
{
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
    if (imag<0)
    {
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


// main function to test
int main()
{
    //clrscr();
    std::cout<<"Complex Class Test"<<std::endl;
    Complex myComp1, myComp2, resultComp;

    myComp1.setReal (7);
    myComp1.setImag (2);
    std::cout << "Comp1: ";
    myComp1.print();

    myComp2.setReal (5);
    myComp2.setImag (3);
    std::cout << "Comp2: ";
    myComp2.print();

    resultComp = myComp1.add(myComp2);
    std::cout << "Addition: ";
    resultComp.print();

    resultComp = myComp1.sub(myComp2);
    std::cout << "Subtraction: ";
    resultComp.print();

    return 0;
}