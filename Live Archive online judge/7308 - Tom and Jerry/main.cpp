#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout << setprecision(8) << fixed ;
    int TC ; cin >> TC ;
    int cnt = 0 ;
    while(TC--){
    double r , v ; cin >> r >> v ;
    cout << "Case " << ++cnt << ": " << ( acos(-1) * r / (2 * v) )<< "\n" ;
    }
}
