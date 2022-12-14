#include<stdio.h>
#include<graphics.h>
void findNewCoordinate(int s[][2], int p[][1])
{
	int temp[2][1] = { 0 };

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 1; j++)
			for (int k = 0; k < 2; k++)
				temp[i][j] += (s[i][k] * p[k][j]);

	p[0][0] = temp[0][0];
	p[1][0] = temp[1][0];
}

void scale(int x[], int y[], int sx, int sy)
{
	line(x[0], y[0], x[1], y[1]);
	line(x[1], y[1], x[2], y[2]);
	line(x[2], y[2], x[0], y[0]);

	int s[2][2] = { sx, 0, 0, sy };
	int p[2][1];

	for (int i = 0; i < 3; i++)
	{
		p[0][0] = x[i];
		p[1][0] = y[i];

		findNewCoordinate(s, p);

		x[i] = p[0][0];
		y[i] = p[1][0];
	}

	line(x[0], y[0], x[1], y[1]);
	line(x[1], y[1], x[2], y[2]);
	line(x[2], y[2], x[0], y[0]);
}
int main()
{
	int x[] = { 20, 40, 60 };
	int y[] = { 40, 20, 40 };
	int sx = 5, sy = 5;

	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm,NULL);

	scale(x, y, sx,sy);
	getch();

	return 0;
}
