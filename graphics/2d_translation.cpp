
#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void translatePoint ( int P[], int T[])
{
	int gd = DETECT, gm, errorcode;
	initgraph (&gd, &gm, NULL);
	
	cout<<"Original Coordinates :"<<P[0]<<","<<P[1];

	putpixel (P[0], P[1], WHITE);

	P[0] = P[0] + T[0];
	P[1] = P[1] + T[1];

	cout<<"\nTranslated Coordinates :"<< P[0]<<","<< P[1];
	
	putpixel (P[0], P[1], WHITE);
    getch();
	closegraph();
}

int main()
{
	int P[2] = {5, 8}; 
	int T[] = {20, 10}; 
	translatePoint (P, T);
	return 0;
}
