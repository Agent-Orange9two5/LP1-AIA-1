#include <stdio.h>
#include <stdlib.h>

    typedef struct {
    int x,y;
    }Point;

    typedef struct {
    Point topLeft;
    Point bottomRight;
    }Rectangle;

int main()
{
    Point p1,p2;
    p1.x =0;
    p1. y= 3;
    p2.x = 4;
    p2. y= 0;
    printf("p1 la (%d, %d)\n", p1.x, p1.y);
    printf("p2 la (%d, %d)\n", p2.x, p2.y);
    Rectangle rect;
    rect.topLeft = p1;
    rect.bottomRight= p2;
    printf("Stanga sus la (%d,%d)\n", rect.topLeft.x, rect.topLeft.y);
    printf("Dreapta jos la (%d,%d)\n", rect.bottomRight.x, rect.bottomRight.y);
    return 0;
}
