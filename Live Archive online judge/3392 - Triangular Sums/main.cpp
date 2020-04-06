#include <bits/stdc++.h>
#define sz(v) (int)v.size()
#define all(v) v.begin() , v.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

typedef long long ll ;

int main() {
     fast;
     int t ; cin >> t ;
     int cnt = 0 ;
     while(t--){
        cnt++;
       int n ; cin >> n ;
       int sum = 0 ;
      for(int i = 1 ; i <= n ; ++i){
         sum += i * ( ( (i+1) * (i+1+ 1) ) / 2) ;
      }
      cout << cnt << " " << n << " " << sum << endl ;
     }
}


1 2 3  .... (n - 2) (n - 1) n

(n + 1) + (n + 1) 

2 + 2 + 2 + 2 