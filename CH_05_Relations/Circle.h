#ifndef CIRCLE_H
#define CIRCLE_H
// need 1 point

// cen: Point
// r: int
class Circle
{
private:
    Point center;
    int radius;
public:
    Circle() : center()
    {radius = 0; std::cout<<"At Circle Const."; }
    Circle(int m, int n, int r) : center(m,n)
    {radius = 0; std::cout<<"At Circle Const.";}
    void draw()
    {
        // need graphics library
        //circle(center.getX(), center.getY(), radius);
    }
};

#endif