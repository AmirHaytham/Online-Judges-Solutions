#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#define DBG(z) cerr << "here => " << #z << ": " << (z) << endl
#define next_int() ({int __t; scanf("%d", &__t); __t;})
#define mem(f, a) memset(f, a, sizeof(f))
#define LINE cerr << "DEBUG LINE: " << __LINE__ << endl
#define F first
#define S second
#define f(i , s , n) for(int i = s ; i < n ; ++i)
#define sz(v)) (int)v.size()
#define all(v) v.begin(),v.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define rall(c) (c).rbegin(), (c).rend()
#define LightedDigits(x) __builtin_popcount(x)
#define mp make_pair
#define mt make_tuple
#define pb push_back
typedef long long ll ;
using namespace std;

ll c[201][201] ;
int n , k ;
int main(){
    c[0][0] = 1 ;
    for( n = 1 ; n <= 200 ; ++n ){
        c[n][0] = 1 ;
        for( k = 1 ; k <= n ; ++k )
            c[n][k] = ( c[n - 1][k - 1] + c[n - 1][k]   )%1000000;
    }
    while ( cin >> n >> k , n && k ){
        cout << c[n+k-1][k-1] << "\n" ;
    }

}
