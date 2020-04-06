#include <bits/stdc++.h>
#define sz(v) (int)v.size()
#define all(v) v.begin() , v.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
typedef long long ll ;

int main()
{
    fast;
    ll n ;
    int cnt = 0 ;
    vector<int> v ;
    while(cin >> n && n != 0){
        cnt++;
        v.resize(n);
        for(int i = 0 ; i < n ; ++i){
            cin >> v[i] ;
        }
        ll avg = accumulate(all(v),0) / n ;
        ll lol = 0 ;
        for(int i = 0 ; i < n ; ++i){
            if (avg >= v[i])
            lol += abs(v[i]-avg);
        }
        cout << "Set #" << cnt << endl ;
        cout << "The minimum number of moves is " << lol << "." << endl ;
        cout << endl ;
        v.clear();
    }

}
