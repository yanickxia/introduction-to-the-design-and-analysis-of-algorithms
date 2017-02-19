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
	for (; i<n; i++) {
		printf("%d ", array[i]);
	}
}


void swap(int *array, int x, int y) {
	int t = array[x];
	array[x] = array[y];
	array[y] = t;
}

double brute_force_cloest_point(Point *points, int n) {
	int i = 0, j = 0;
	double d = -1;

	for (i = 0; i < n - 1;i++)
	{
		for (j = i; j < n; j++)
		{
			Point px = points[i];
			Point py = points[j];
			double dis =  sqrt((px.x - py.x) *(px.x - py.x) + (px.y - py.y) * (px.y - px.y));

			if (d < 0)
			{
				d = dis;
			}

			if (dis < d)
			{
				d = dis;
			}
		}
	}

	return d;

}

int main(int args, char**argv) {
	
}
