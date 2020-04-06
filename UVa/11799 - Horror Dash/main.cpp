#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;

typedef long long ll ;

int main()
{
    int t ;
    cin >> t ;
    vector<int> v ;
    int cnt = 0 ;
    while(t--){
        cnt++;
        int n ; cin >> n ;
        v.resize(n) ;
        for(int i = 0 ; i < n ; ++i){
            cin >> v[i] ;
        }
        cout << "Case " << cnt << ": " << *max_element(all(v)) << endl;
    }
}
