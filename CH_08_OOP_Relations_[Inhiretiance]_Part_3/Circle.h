#include <iostream>
#include <math.h>
#include <conio.h>
#include "GeoShape.h"
using namespace std;

class Circle : public GeoShape
{
public:
    Circle(float r) : GeoShape(r)
    {}
    void setRadius(float r) // or override setD1()
    {d1 = d2 = r;}
    float getRadius()       // or override getD1()
    {return d1;}
    float calculateArea()
    {
        return 22.0/7 * d1 * d2;
    }
};