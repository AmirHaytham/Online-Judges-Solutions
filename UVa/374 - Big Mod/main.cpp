#include <bits/stdc++.h>

using namespace std;

typedef long long ll ;
ll b , p , m ;
const int mod = (1 << 30) - 1;

ll powerMod(ll b,ll p){
    if(p == 0)return 1;
    if(p == 1)return b%mod;
    if(p%2)return (b *powerMod(b,p-1)%mod)%mod;
    return powerMod((b*b)%mod,p/2)%mod;
}
int main()
{
    cin >> b >> p >> m ;

    cout << powerMod(b,p)%m;

}
