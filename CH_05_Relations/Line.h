// need 2 points (composition)

// start: Point
// end: Point
#ifndef  LINE_H
#define  LINE_H

class Line
{
private:
    Point start;
    Point end;
public:
    Line() : start(), end()
    {std::cout<<"At line Const."; }
    Line(int x1, int y1, int x2, int y2) : start(x1,y1), end(x2,y2)
    {std::cout<<"At line Const.";}
    void draw();
};
#endif



