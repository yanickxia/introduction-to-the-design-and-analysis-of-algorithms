#include <iostream>
#include <queue>

using namespace std;

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

void shell_sort(int* array, int n) {

	for (int i = n / 2; i > 0; i = i/2)
	{
		for (int j = i;j < n;j = j+i)
		{
			if (array[j] > array[j-i])
			{
				swap(array, j - i, j);
			}
		}

	}
}



int main(int args, char**argv) {
	
	int array[] = { 0,10,2,7,5 };

	shell_sort(array, 5);
	print_list(array, 5);

	return 0;
}
