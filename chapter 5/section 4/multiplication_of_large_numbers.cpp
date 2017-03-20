#include <iostream>

using namespace std;

long times(int a, int n) {
	int b = 1;
	
	while (n > 0)
	{
		b = b*a;
		n--;
	}
	return b;
}

/*
a & b is same width number
*/
long multiplication_of_large_numbers(int a, int b, int n) {
	if (n % 2 == 0)
	{
		int x = times(10, n);
		int a1 = a / x;
		int a0 = a % x;
		int b1 = b / x;
		int b0 = b % x;

		if ((n/2) % 2 == 0)
		{
			int c1 = multiplication_of_large_numbers(a1, b1, n / 2);
			return	c1 * times(10, n) + (a1 * b0 + a0 * b1) * times(10, n / 2) + (a0 * b0);
		}
		
		return	(a1 * b1) * times(10, n) + (a1 * b0 + a0 * b1) * times(10, n / 2) + (a0 * b0);
	}
}


int main()
{
	cout << multiplication_of_large_numbers(2314, 1414, 4) << endl;
	return 0;
}

