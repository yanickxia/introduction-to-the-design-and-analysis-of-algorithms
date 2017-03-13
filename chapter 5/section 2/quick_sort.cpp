#include <iostream>

using namespace std;

int hoare_partition(int *array, int left, int right) {
	int p = array[left];
	int i = left, j = right + 1;

	while (i < j)
	{
		while (i < j && array[j] >= p)
			j--;
		if (i < j)
		{
			array[i] = array[j];   
			i++;
		}
		while (i < j && array[i] < p)
			i++;
		if (i < j)
		{
			array[j] = array[i];
			j--;
		}
	}
	array[i] = p;

	return i;

}

void quick_sort(int *array, int left, int right) {
	if (left < right) {
		int i = hoare_partition(array, left, right);//先成挖坑填数法调整s[]  
		quick_sort(array, left, i - 1); // 递归调用   
		quick_sort(array, i + 1,right);
	}
}

int main() {
	return 0;
}