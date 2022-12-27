#include <stdio.h>
#include <dos.h>
#include <graphics.h>
using namespace std;
void full();
void car();
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);
    full();
    car();
    getch();
    closegraph();
}
void full()
{
    line(1, 380, 800, 380);
}

void car()
{
    int i;
    for (i = 1; i < 600; i++)
    {
        full();
        line(100 + i, 350, 100 + i, 370);
        line(100 + i, 350, 110 + i, 350);
        line(110 + i, 350, 130 + i, 325);
        line(130 + i, 325, 190 + i, 325);
        line(190 + i, 325, 210 + i, 350);
        line(210 + i, 350, 240 + i, 350);
        line(240 + i, 350, 240 + i, 370);

        // adjust whele
        line(100 + i, 370, 110 + i, 370);
        line(130 + i, 370, 210 + i, 370);
        line(230 + i, 370, 240 + i, 370);

        // middle window
        line(120 + i, 350, 135 + i, 330);
        line(120 + i, 350, 160 + i, 350);
        line(160 + i, 350, 160 + i, 330);
        line(160 + i, 330, 135 + i, 330);

        // right window
        line(165 + i, 350, 165 + i, 330);
        line(188 + i, 330, 205 + i, 350);
        line(165 + i, 350, 205 + i, 350);
        line(165 + i, 330, 188 + i, 330);

        circle(120 + i, 370, 10);
        circle(220 + i, 370, 10);

        // right whele
        pieslice(120 + i, 370, 0 - i, 1 - i, 10);

        pieslice(120 + i, 370, 90 - i, 91 - i, 10);

        pieslice(120 + i, 370, 180 - i, 181 - i, 10);

        pieslice(120 + i, 370, 270 - i, 271 - i, 10);

        // right whele
        pieslice(220 + i, 370, 0 - i, 1 - i, 10);

        pieslice(220 + i, 370, 90 - i, 91 - i, 10);

        pieslice(220 + i, 370, 180 - i, 181 - i, 10);

        pieslice(220 + i, 370, 270 - i, 271 - i, 10);

        delay(15);
        cleardevice();
    }
}
