#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

class GeoShape
{
protected:
    float d1;
    float d2;
public:
    GeoShape()
    {d1=d2=0;}
    GeoShape(float n)
    {d1=d2=n;}
    GeoShape(float x, float y)
    {d1=x; d2=y;}
    void setD1(float x)
    {d1=x;}
    void setD2(float y)
    {d2=y;}
    float getD1()
    {return d1;}
    float getD2()
    {return d2;}
    virtual float calculateArea()
    {
        return 0;
    }
};