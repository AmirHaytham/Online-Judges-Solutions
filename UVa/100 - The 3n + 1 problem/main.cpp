#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

typedef long long ll ;
ll max0 = 0 ;
  /*ll _3nplus1 (ll n){
    //max0 = _3nplus1(n) ;
    if (n == 1)return 1 ;
    if (n % 2 == 0)
       return  1 + _3nplus1 (n/2);
    else if (n % 2 != 0)
       return  1 + _3nplus1 (3*n+1);
   // else _3nplus1 (n);

}*/
ll _3nplus1 (ll n){
    //max0 = _3nplus1(n) ;
    int cnt = 1 ;
    while(n != 1){
        if (n % 2 == 0)
            n>>=1 , cnt++;
        else n = 3 * n + 1 , cnt++;
    }
    return cnt ;
   // else _3nplus1 (n);

}
int main()
{
    FAST;
    ll i , j ;
    while(cin >> i >> j){
           if (i > j)swap(i,j);
           ll max_ = INT_MIN ;
     for(int lol = i ; lol <= j ; ++lol){
         max_ = max (max_ , _3nplus1(lol));
        //cout << _3nplus1(lol) << " "  << max_ << endl ;
     }
     cout << i << " " << j << " " << max_ << endl ;
    }

}
