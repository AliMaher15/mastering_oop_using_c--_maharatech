// x: int
// y: int
#ifndef  POINT_H
#define  POINT_H
class Point
{
private:
    int x;
    int y;
public:
    Point();
    Point(int m, int n);
    //~Point();
    void setX(int m);
    void setY(int n);
    int getX();
    int getY();
};

#endif



