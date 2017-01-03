#include <iostream>
using namespace std;


#define MIN(m,n) m < n ? n : m


int light_n(int n) {
	int x[n] = 0;
	int i = 1, j = 0;
	while(i <= n){
		j = 0;
		for(;j<n;j++){
			if((j+1) % i == 0){
				x[j] = 1;
			}
		}
		i++;
	}
 	
 	return 0;
}

int main() {

}


