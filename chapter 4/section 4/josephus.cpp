#include<iostream>
#include<vector>
using namespace std;

int josephus(int n) {

	if (n == 1) {
		return 1;
	}

	int res;

	if (n % 2 == 0)
	{
		res = josephus(n / 2) * 2;
		res--;
	}
	else {
		res = josephus((n - 1) / 2) * 2;
		res++;
	}

	return res;
}



int main() {
	
	int key_index = josephus(6);

	cout << key_index << endl;
	
	return 0;
}