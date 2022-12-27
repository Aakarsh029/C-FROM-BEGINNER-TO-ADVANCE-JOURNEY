#include <bits/stdc++.h>
#include <graphics.h>
#include <stdio.h>
using namespace std;
int main()
{
	int gm, gd = DETECT;
    initwindow(1000,1000);
	floodfill(10,20,15);
    setcolor(0);
    line(200,200,300,100);
    line(300,100,400,200);
    line(200,200,400,200);
    line(300,100,600,100);
    line(400,200,700,200);
    line(600,100,700,200);
    line(200,200,200,400);
    line(400,200,400,400);
    line(700,200,700,400);
    line(200,400,700,400);
	
	getch();
	closegraph();
}
