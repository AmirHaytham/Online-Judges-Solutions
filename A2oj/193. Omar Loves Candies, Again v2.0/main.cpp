#include <bits/stdc++.h>

using namespace std ;

int main () {
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        vector<int> v(26) ;
        for(int i = 0 ; i < s.size() ; ++i){
            v[s[i] - 'a']++;
        }
        int f = 0 ;
        char ch ;
        for(int i = 0 ; i < 26 ; ++i){
            if (v[i] > f){
             f = v[i] ;
             ch = char(i + 'a') ;
            }
        }
        cout << f << " " << ch << endl ;
    }

}
