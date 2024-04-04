#include <iostream>
#include <math.h>
#include <conio.h>
#include "GeoShape.h"
using namespace std;

class Rect : public GeoShape
{
public:
    Rect(float x, float y) : GeoShape(x,y)
    {}
    float calculateArea()
    {
        return d1 * d2;
    }
};