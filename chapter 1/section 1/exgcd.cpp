#include <iostream>
using namespace std;


#define MIN(m,n) m < n ? n : m


int extend_gcd(int m, int n, int &x, int &y)
{
    if(n == 0)
    {
        x = 1;
        y = 0;
        return m;
    }

    int r = extend_gcd(n, m % n, x, y);
    int t = x;
    x = y;
    y = t-m / n*y;
    return r;

}


int diophantin(int a, int b, int c, int &x, int &y)
{
    int r = extend_gcd(a, b,x,y);
    int times =  c / r;
    x = x * times;
    y = y * times;

    return r;
}


int main()
{

    int a = 31415;
    int b = 14142;
    int x = 1;
    int y = 0;

    cout << extend_gcd(a, b, x, y) << '\n';
    cout << x << '\n' << y << '\n';

    a = 2;
    b = 1;
    int c = 2;

    cout << diophantin(a,b,c,x,y) << '\n';
    cout << x << '\n' << y ;

    return 0;
}


