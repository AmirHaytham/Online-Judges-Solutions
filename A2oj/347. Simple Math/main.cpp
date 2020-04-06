#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << fixed << setprecision(6) ;
    long long a , b , c ;
    cin >> a >> b >> c ;
    cout << (long double)(-1 * b + sqrt( pow(b , 2) - (4 * a * c) ) ) / (2 * a) ;
}
