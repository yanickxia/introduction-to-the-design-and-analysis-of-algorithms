#include<iostream>
#include<vector>
using namespace std;

void swap(int *array, int i, int j) {
	int v = array[i];
	array[i] = array[j];
	array[j] = v;
}


int lomuto_partition(int *array, int l, int r) {
	int p = array[l];
	int s = l;

	for (int i = l + 1; i < r; i++)
	{
		if (array[i] < p)
		{
			s += 1;
			swap(array, i, s);
		}
	}

	swap(array, s, l);
}


int quick_select(int *array,int l, int r, int k) {
	int s = lomuto_partition(array, 0, r);
	if (s == l + k - 1) {
		return array[s];
	}
	else if (s > l + k - 1) {
		quick_select(array, l, s - 1, k);
	}
	else {
		quick_select(array, s + 1, r, l + k - 1 - s);
	}
}


int main() {
	
	return 0;
}