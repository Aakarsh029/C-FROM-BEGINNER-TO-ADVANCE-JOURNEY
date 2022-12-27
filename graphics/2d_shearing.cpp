#include <bits/stdc++.h>
#include <graphics.h>
#include <stdio.h>
using namespace std;
int main()
{
    int gm, gd = DETECT;

initwindow(1080,1080);
floodfill(540,540,15);
    int x1 = 400, y1 = 100, x2 = 600, y2 = 100, x3 = 400, y3 = 200, x4 = 600, y4 = 200, shx = 2;
    cout << "Before shearing of rectangle" << endl;
    setcolor(3);
    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x3, y3, x4, y4);
    line(x2, y2, x4, y4);
    cout << "After shearing of rectangle" << endl;
    x1 = x1 + shx * y1;
    x2 = x2 + shx * y2;
    x3 = x3 + shx * y3;
    x4 = x4 + shx * y4;
    setcolor(13);
    line(x1, y1, x2, y2);
    line(x1, y1, x3, y3);
    line(x3, y3, x4, y4);
    line(x2, y2, x4, y4);
    getch();
    closegraph();
}
