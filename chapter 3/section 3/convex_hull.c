#include<stdio.h>
#include <math.h>


struct Point
{
	int x;
	int y;
};


#define Point Point


void print_list(int *array, int n) {

	int i = 0;
	for (; i < n; i++) {
		printf("%d ", array[i]);
	}
}


void swap(int *array, int x, int y) {
	int t = array[x];
	array[x] = array[y];
	array[y] = t;
}

int convex_hull(Point *points, int n) {
	int i = 0, j = 0;
	for (i = 0; i < n - 1;i++)
	{
		for (j = i + 1; j < n; j++)
		{
			int a = points[j].y - points[i].y;
			int b = points[i].x - points[j].x;
			int c = points[i].x* points[j].y - points[i].y * points[j].x;

			if (!(is_all_in_convex(points, n, i, j, a, b, c, true) || is_all_in_convex(points, n, i, j, a, b, c, false)))
			{
				return -1;
			}
		}
	}
}


bool is_all_in_convex(Point *point, int n, int x, int y, int a, int b, int c, bool bigger) {
	int i = 0;
	for (i;i < n; i++)
	{
		if (i != x && i != y)
		{
			int _c = a * point[i].x + b * point[i].y;

			if (bigger)
			{
				if (_c > c) {

				}
				else {
					return false;
				}
			}
		}
	}
}




int main(int args, char**argv) {

}
