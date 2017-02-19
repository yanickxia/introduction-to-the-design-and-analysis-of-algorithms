#include<stdio.h>


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

int sequential_search(int *array, int n, int key) {
	int i = 0;
	for (; i < n; i++) {
		if (array[i] == key)
		{
			return i;
		}
	}

	return -1;
}



int main(int args, char**argv) {
	int array[] = { 0,1,0,1,0,1,0,1 };
	int i = sequential_search(array, 8, 1);
	printf("%d", i);
}
