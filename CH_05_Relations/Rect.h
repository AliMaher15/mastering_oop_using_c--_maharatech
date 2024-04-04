// need 2 points

// ul: Point
// lr: Point

#ifndef  RECTANGLE_H
#define  RECTANGLE_H


class Rect
{
private:
    Point ul;
    Point lr;
public:
    Rect() : ul(), lr()
    {std::cout<<"At Rect Const."; }
    Rect(int x1, int y1, int x2, int y2) : ul(x1,y1), lr(x2,y2)
    {std::cout<<"At Rect Const.";}
    void draw();
};
#endif 



