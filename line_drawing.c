#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm, i;
    int x1, y1, x2, y2, dx, dy, xinc, yinc, step, x, y;
    printf("Enter the value of x1, y1, x2, y2: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    dx = x2 - x1;
    dy = y2 - y1;
    if ((ABS(dx)) > ABS(dy))
    {
        step = ABS(dx);
    }
    else
    {
        step = ABS(dy);
    }
    xinc = dx / step;
    yinc = dy / step;
    for (int i = 0; i < step; i++)
    {
        putpixel(x, y,RED);
        x = x + xinc;
        y = y + yinc;
    }
    delay(500);
    return 0;
}