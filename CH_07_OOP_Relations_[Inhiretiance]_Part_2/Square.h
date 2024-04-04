#include <iostream>
#include <math.h>
#include <conio.h>
#include "GeoShape.h"
#include "Rect.h"
using namespace std;

class Square : private Rect
{
public:
    Square(float r) : Rect(r,r)
    {}
    void setSquareDim(float r) // or override setD1()
    {d1 = d2 = r;}
    float getSquareDim()       // or override getD1()
    {return d1;}
    float calculateArea()     // must override because Rect's is private 
    {
        return Rect::calculateArea();
    }
};