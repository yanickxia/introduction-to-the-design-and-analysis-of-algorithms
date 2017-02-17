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


void bubble_sort(int *array, int n) {
	int i = 0, j = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (array[j] < array[i]) {
				swap(array, i, j);
			}
		}
		
	}
}


int main(int args, char**argv) {
	int array[] = { 89,45,68,90,29,34,17 };
	bubble_sort(array, 7);
	print_list(array, 7);
}
