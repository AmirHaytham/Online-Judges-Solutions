#include <bits/stdc++.h>

using namespace std ;
int main (){
    int t ;
    cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;
        /*vector<long long> v(n) ;
         start:
         for(long long i = 1 ; i <= n ; ++i){
                long long tmp = rand()%(long long)1e6 ;
                if (tmp == 0){
                 --i;
                 continue;
                }
                else v.push_back(tmp);
         }
         for(long long i = 0 ; i < v.size()-1 ; ++i){
            if (v[i+1] % v[i] == 0)
                goto start;
         }
         for(long long i = 0 ; i < n ; ++i){
            cout << v[i] << " " ;
         }*/
         n = (int)1e6 - n;
         for(int i = n ; i < (int)1e6 ; ++i){
            cout << i << " ";
         }
         cout << endl ;
    }
}
