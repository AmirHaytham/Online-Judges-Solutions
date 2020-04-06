#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;

int main()
{
    freopen("mosalah.in","r", stdin);
    int TC ; cin >> TC ;
    while(TC--){
        int n , m , x , y ; cin >> n >> m >> x >> y ;
        int res = ( (x+y)* n - m ) ;
        if (y == 0){
            cout << -1 << "\n";
            continue ;
        }
        cout << ( ( (res+m) / (x+y) ) < n ? -1 : res ) << "\n" ;
    }
}
