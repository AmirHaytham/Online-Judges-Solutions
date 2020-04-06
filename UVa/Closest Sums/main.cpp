#include <bits/stdc++.h>
#define F first
#define S second
#define f(i , s , n) for(int i = s ; i < n ; ++i)
#define sz(v)) (int)v.size()
#define all(v) v.begin(),v.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define LightedDigits(x) __builtin_popcount(x)
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define clean(v) memset(v,0,sizeof(v))
#define nMAX 1001

int all[ ( nMAX * (nMAX - 1) / 2 ) + 1 ] , v[nMAX] , n , ind , c ;
int sumSofar , q , tmp  ;
using namespace std;
typedef long long ll;

int main(){

  while(cin >> n , n){
    clean(all) ;
    sumSofar = ( n * (n - 1) / 2);
    int ind = 0 ;
    f(i , 0 , n)cin >> v[i] ;

    f(i , 0 , n)
        f(j , i + 1 , n)
            all[ind++]=v[i]+v[j];

    sort(all , all + sumSofar) ;
    cin >> q ;
    //f(i , 0 , sumSofar)cout << all[i] << " " ;
    cout << "Case " << ++c << ":\n" ;
    while(q--){
        cin >> tmp ;
        cout << "Closest sum to " << tmp << " is " ;
        int ind_ = lower_bound(all , all + sumSofar , tmp ) - all ;
        //cout << "ind_ : " << ind_ << "\n" ;
        if( abs(all[ind_]- tmp) < abs(all[ind_ - 1]- tmp) )
            cout << all[ind_] << "." << endl ;
        else cout << ( ind_ - 1 < 0  ? all[ind_] : all[ind_ - 1] ) << "." << endl ;
    }

  }
}
