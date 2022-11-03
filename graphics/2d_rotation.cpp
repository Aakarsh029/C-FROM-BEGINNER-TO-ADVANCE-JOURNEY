
#include <iostream>
#include <math.h>
using namespace std;
#define SIN(x) sin(x * 3.141592653589 / 180)
#define COS(x) cos(x * 3.141592653589 / 180)

void rotate(float a[][2], int n, int x_pivot, int y_pivot,
			int angle)
{
	int i = 0;
	while (i < n) {
		int x_shifted = a[i][0] - x_pivot;
		int y_shifted = a[i][1] - y_pivot;

		a[i][0] = x_pivot
				+ (x_shifted * COS(angle)
					- y_shifted * SIN(angle));
		a[i][1] = y_pivot
				+ (x_shifted * SIN(angle)
					+ y_shifted * COS(angle));
		cout << "(" << a[i][0] << ", " << a[i][1] << ") ";
		i++;
	}
}

int main()
{
	int size1 = 4; 
	float points_list1[][2] = { { 100, 100 },
								{ 150, 200 },
								{ 200, 200 },
								{ 200, 150 } };
	rotate(points_list1, size1, 0, 0, 90);

	return 0;
}
