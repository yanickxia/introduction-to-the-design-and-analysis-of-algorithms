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

void insert_sort(int* array, int n) {

	for (int i = 1; i < n; i++)
	{
		int insert_name = array[i];
		for (int j = 0; j < i; j++)
		{
			if (array[i] > array[j])
			{
				swap(array, i, j);
			}
		}
	}

}



int main(int args, char**argv) {
	
	int array[] = { 0,10,2,7,5 };

	insert_sort(array, 5);
	print_list(array, 5);

	return 0;
}
