#include<iostream>
#include<vector>
using namespace std;

/************************************************************************/
/* if find return > -1, not found -1                                    */
/************************************************************************/
int binay_search(int *array, int n, int key) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (array[m] == key) {
			return m;
		}else if (array[m] > key)
		{
			r = m - 1;
		}
		else {
			r = m + 1;
		}
	}

	return -1;
}



int main() {
	int array[] = { 1,3,5,7,9,11 };
	int key_index = binay_search(array, 6, 5);

	cout << key_index << endl;
	
	return 0;
}