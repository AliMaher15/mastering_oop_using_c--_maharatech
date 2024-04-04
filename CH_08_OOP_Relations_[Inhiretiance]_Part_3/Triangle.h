#include <iostream>
#include <math.h>
#include <conio.h>
#include "GeoShape.h"
using namespace std;

class Triangle : public GeoShape
{
public:
    Triangle(float b, float h) : GeoShape(b,h)
    {}
    float calculateArea()
    {
        return 0.5 * d1 * d2;
    }
};