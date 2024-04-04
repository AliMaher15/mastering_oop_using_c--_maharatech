#include "GeoShape.h"
#include "Circle.h"
#include "Rect.h"
#include "Triangle.h"
#include "Square.h"

float sumAreas(GeoShape *p1, GeoShape *p2, GeoShape *p3)
{
    return p1->calculateArea() + p2->calculateArea() + p3->calculateArea();
}

int main() {
    GeoShape *p;
    Circle c(10);
    Rect r(30,40);
    Triangle t(100,150);
    Square s(60);
                        // Compiler           // Runtime
    p = &c;             // GeoShape
    p -> calculateArea();                     // Circle

    p = &r;             // GeoShape
    p -> calculateArea();                     // Rect

    p = &t;             // GeoShape
    p -> calculateArea();                     // Triange

    p = &s;             // GeoShape
    p -> calculateArea();                     // Square

    Triangle myT(20,10);
    Rect     myR(2,5);
    Circle   myC(5);

    cout<<sumAreas(&myT,&myR,&myC)<<endl;

}