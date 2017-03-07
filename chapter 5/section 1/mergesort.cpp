#include<iostream>
#include<vector>
#include <stdlib.h>
using namespace std;

void print_list(int *array, int n) {

	int i = 0;
	for (; i < n; i++) {
		printf("%d ", array[i]);
	}
}

void mergesort(int *array, int n) {
	if (n > 1)
	{
		int mid = (n / 2);
		//COPY A -> B
		int *b = (int *)calloc(mid, sizeof(int));
		for (int i = 0; i < mid; i++)
		{
			b[i] = array[i];
		}

		//COPY A -> C
		int *c = (int *)calloc((n - mid), sizeof(int));
		for (int i = 0; i < (n-mid); i++)
		{
			c[i] = array[mid + i];
		}

		mergesort(b, mid);
		mergesort(c, n - mid);

		//Merge
		int i = 0, j = 0, k=0;
		while (i < mid && j < (n-mid))
		{
			if (b[i] <= c[j])
			{
				array[k] = b[i];
				i++;
			}
			else {
				array[k] = c[j];
				j++;
			}
			k++;
		}

		if (i == mid)
		{
			for (j; j < (n - mid);j++)
			{
				array[k] = c[j];
				k++;
			}
		}
		else {
			for (i; i < mid; i++)
			{
				array[k] = b[i];
				k++;
			}
		}

		free(b);
		free(c);

	}
}


int main() {

	int array[] = { 8,7,6,5,4,3,2,1 };
	mergesort(array, 8);
	print_list(array, 8);

	return 0;
}