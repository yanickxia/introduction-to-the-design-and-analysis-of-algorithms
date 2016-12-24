#include <iostream>
using namespace std;


#define MIN(m,n) m < n ? n : m


int gcd(int m, int n) {
    //Step 1
    int t = MIN(m,n);

    while(t > 0) {
        //Step2
        if ( m % t == 0) {
            //Step 3
            if(n % t == 0) {
                return t;
            }
        }
        //Step 4
        t--;
    }

    return 0;
}


//   Euclid’s algorithm
int euclid_gcd(int m, int n) {

    if(n == 0) {
        return m;
    }

    return euclid_gcd(n, m % n);
}



int main() {

    int a =31415;
    int b = 14142;

    cout <<  gcd(a, b) << '\n';
    cout << euclid_gcd(a,b);
    return 0;
}


