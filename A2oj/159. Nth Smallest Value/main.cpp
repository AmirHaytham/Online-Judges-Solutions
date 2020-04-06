#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
#define upcase (v) transform(all(v) , v.begin() , ::toupper);
#define lowcase(v) transform(all(v) , v.begin() , ::tolower);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t ; cin >> t ;
    vector<int> v(10) ;
    while(t--){
        for(int i = 0 ; i < 10 ;  ++i){
            cin >> v[i] ;
        }
        sort(all(v));
        vector<int>::iterator it = v.begin() ;
        it = upper_bound(all(v) , *min_element(all(v))) ;
        cout << *it << endl ;
    }
}
