#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ,k ;
        cin >> n >> k ;
        vector<int> v ;
        for(int i = 1 ; i <= n ; ++i){
            int tmp ; cin >> tmp ;
            v.push_back(tmp/k);
        }
        cout << accumulate(v.begin() , v.end() , 0 ) << endl ;
    }
}
