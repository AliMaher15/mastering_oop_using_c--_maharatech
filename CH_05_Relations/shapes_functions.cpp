#include <iostream>
#include <math.h>
#include <conio.h>
#include <graphics.h>
#include "Point.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "Picture.h"

// POINT //
Point::Point()
{
    x = y = 0;
}

Point::Point(int m, int n)
{
    x = m;
    y = n;
}

void Point::setX(int m)
{
    x = m;
}

void Point::setY(int n)
{
    y = n;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}

// CIRCLE //

// LINE //
void Line::draw()
{
    // need graphics library
    //line(start.getX(), start.getY(), end.getX(), end.getY());
}

// RECT //
void Rect::draw()
{
    // need graphics library
    //rectangle(ul.getX(), ul.getY(), lr.getX(), lr.getY());
}

// PICTURE //
void Picture::setLines(int ln, Line *lptr)
{
    lNum = ln;
    pLines = lptr;
}

void Picture::setCircles(int cn, Circle *cptr)
{
    cNum = cn;
    pCircles = cptr;
}

void Picture::setRects(int rn, Rect *rptr)
{
    rNum = rn;
    pRects = rptr;
}

void Picture::paint()
{
    int i;
    // paint lines
    for (i = 0; i < lNum; i++)
    {
        pLines[i].draw();
    }
    // paint Circles
    for (i = 0; i < cNum; i++)
    {
        pCircles[i].draw();
    }
    // paint Rectangles
    for (i = 0; i < rNum; i++)
    {
        pRects[i].draw();
    }
}