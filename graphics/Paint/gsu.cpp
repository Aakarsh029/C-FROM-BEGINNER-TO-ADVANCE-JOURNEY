#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;
void flood(int x, int y, int fillColor, int defaultColor)
{
    if (getpixel(x, y) == defaultColor)
    {
        delay(1);
        putpixel(x, y, fillColor);
        flood(x + 1, y, fillColor, defaultColor);
        flood(x - 1, y, fillColor, defaultColor);
        flood(x, y + 1, fillColor, defaultColor);
        flood(x, y - 1, fillColor, defaultColor);
    }
}
int main()
{
    int gd = DETECT, gm, s, v, i, a;
    initgraph(&gd, &gm, NULL);
    cout << "1.2d transformation\n2.flood\n3.dda\n4.Shapes   " << endl;
    cout << "Selection:" ;
    cin >> s;
    cout << endl;
    switch (s)
    {
    case 1:
    {
        cout << "\t6.Translation\n\t7.Rotation\n\t8.Scaling\n\t9.Reflection\n\t10.Shearing   " << endl;
        cout << "\tSelection:";
        cin >> v;
        cout << endl;
        switch (v)
        {
        case 6:
        {
            int x1 = 200, y1 = 150, x2 = 300, y2 = 250;
            int tx = 50, ty = 50;
            cout << "Rectangle before translation" << endl;
            setcolor(3);
            rectangle(x1, y1, x2, y2);
            setcolor(4);
            cout << "Rectangle after translation" << endl;
            rectangle(x1 + tx, y1 + ty, x2 + tx, y2 + ty);
            getch();
        }
        case 7:
        {
            long x1 = 200, y1 = 200, x2 = 300, y2 = 300;
            double a;
            cout << "Rectangle with rotation" << endl;
            setcolor(3);
            rectangle(x1, y1, x2, y2);
            cout << "Angle of rotation:";
            cin >> a;
            a = (a * 3.14) / 180;
            long xr = x1 + ((x2 - x1) * cos(a) - (y2 - y1) * sin(a));
            long yr = y1 + ((x2 - x1) * sin(a) + (y2 - y1) * cos(a));
            setcolor(2);
            rectangle(x1, y1, xr, yr);
            getch();
            break;
        }
        case 8:
        {
            int x1 = 30, y1 = 30, x2 = 70, y2 = 70, y = 2, x = 2;
            cout << "Before scaling" << endl;
            setcolor(3);
            rectangle(x1, y1, x2, y2);
            cout << "After scaling" << endl;
            setcolor(10);
            rectangle(x1 * x, y1 * y, x2 * x, y2 * y);
            getch();
            break;
        }
        case 9:
        {
            int x1 = 200, y1 = 300, x2 = 500, y2 = 300, x3 = 350, y3 = 400;
            cout << "triangle before reflection" << endl;
            setcolor(3);
            line(x1, y1, x2, y2);
            line(x1, y1, x3, y3);
            line(x2, y2, x3, y3);
            cout << "triangle after reflection" << endl;
            setcolor(5);
            line(x1, -y1 + 500, x2, -y2 + 500);
            line(x1, -y1 + 500, x3, -y3 + 500);
            line(x2, -y2 + 500, x3, -y3 + 500);
            getch();
            break;
        }
        case 10:
        {
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
        }
        }
    }
    case 2:
    {
        rectangle(50, 50, 250, 250);
        flood(55, 55, 10, 0);
        getch();
    }
    case 3:
    {
        float x, y, dx, dy, steps;
        int x0, x1, y0, y1;
        initgraph(&gd, &gm, NULL);
        setbkcolor(WHITE);
        x0 = 100, y0 = 200, x1 = 500, y1 = 300;
        dx = (float)(x1 - x0);
        dy = (float)(y1 - y0);
        if (dx >= dy)
        {
            steps = dx;
        }
        else
        {
            steps = dy;
        }
        dx = dx / steps;
        dy = dy / steps;
        x = x0;
        y = y0;
        i = 1;
        while (i <= steps)
        {
            putpixel(x, y, WHITE);
            x += dx;
            y += dy;
            i = i + 1;
        }
        getch();
    }
    case 4:
    {
        cout << "\t11.Triangle\n\t12.Rectangle\n\t13.Square\n\t14.Circle\n\t15.Ellipse" << endl;
        cout << "\tSelection:" ;
        cin >> a;
        cout<<endl;
        switch (a)
        {
        case 11:
        {
            cout << "enter first coordinate" << endl;
            int x1, x2, x3, y1, y2, y3;
            cin >> x1 >> y1;
            cout << "enter second coordinate" << endl;
            cin >> x2 >> y2;
            cout << "enter third coordinate" << endl;
            cin >> x3 >> y3;
            line(x1, y1, x2, y2);
            line(x1, y1, x3, y3);
            line(x2, y2, x3, y3);
            getch();
        }
        case 12:
        {
            cout << "enter first coordinate" << endl;
            int x1, x2, x3, y1, y2, y3, x4, y4;
            cin >> x1 >> y1;
            cout << "enter second coordinate" << endl;
            cin >> x2 >> y2;
            cout << "enter third coordinate" << endl;
            cin >> x3 >> y3;
            cout << "enter fourth coordinate" << endl;
            cin >> x4 >> y4;
            line(x1, y1, x2, y2);
            line(x2, y2, x3, y3);
            line(x4, y4, x3, y3);
            line(x4, y4, x1, y1);
            getch();
        }
        case 13:
        {
            cout << "enter first coordinate" << endl;
            int x1, x2, x3, y1, y2, y3, x4, y4;
            cin >> x1 >> y1;
            cout << "enter second coordinate" << endl;
            cin >> x2 >> y2;
            cout << "enter third coordinate" << endl;
            cin >> x3 >> y3;
            cout << "enter fourth coordinate" << endl;
            cin >> x4 >> y4;
            line(x1, y1, x2, y2);
            line(x2, y2, x3, y3);
            line(x4, y4, x3, y3);
            line(x4, y4, x1, y1);
            getch();
        }
        case 14:
        {
            cout << "Enter the centre of circle" << endl;
            int x1, y1;
            cin >> x1 >> y1;
            cout << "Enter the radius of circle" << endl;
            int r;
            cin >> r;
            circle(x1, y1, r);
            getch();
        }
        case 15:
        {
            int x = 250, y = 200;

            // here is the starting angle
            // and end angle
            int start_angle = 0;
            int end_angle = 360;

            // radius from x axis and y axis
            int x_rad = 100;
            int y_rad = 50;
            ellipse(x, y, start_angle,
                    end_angle, x_rad, y_rad);

            getch();
        }
        }
    }
    default:
    {
        cout << "Invalid Selection" << endl;
        break;
    }
    }
    closegraph();
    return 0;
}