#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while (t--){
        long long n ;
        vector<long long> v ;
        cin >> n ;
        for(long long i = 1 ; i <= n ; ++i){
            if( n % i ==0 )
                v.push_back(i);
        }
        long long  cnt = 0 ;
        for(vector<long long> :: iterator it = v.begin() ; it != v.end() ; ++it){
            if (*it % 2 == 0){
                cnt++;
            }
        }
        cout << cnt << endl ;
    }
}
