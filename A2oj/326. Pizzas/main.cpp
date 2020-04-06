#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
#define upcase (v) transform(all(v) , v.begin() , ::toupper);
#define lowcase(v) transform(all(v) , v.begin() , ::tolower);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t ; cin >> t ;
    int cnt = 0 ;
    while(t--){
        cnt++;
        int n ; cin >> n ;
        vector<long long> v(n) ;
        for(int i = 0 ; i < n ; ++i){
            cin >> v[i] ;
        }
        cout << "Case " << cnt << ": " <<  accumulate(all(v) , 0) << endl ;
    }
}
