#include <bits/stdc++.h>

using namespace std ;

int main (){
    int t ;
    cin >> t ;
    while(t--){
         string s ;
         cin >> s ;
         sort(s.begin() , s.end());
         int max_ = INT_MIN ;
         map<char , int> mp ;
         char ch1 ;
         for(int i = 0 ; s[i] != '\0' ; ++i){
            ++mp[s[i]];
            if (mp[s[i]]> max_){
             max_ = mp[s[i]] ;
             ch1 = s[i] ;
            }
         }
         int max_2 = 0;
         char ch2  = 'l';
         for(map<char , int> :: iterator it = mp.begin() ; it != mp.end() ; ++it){
            if ( (it->second == max_) && (it->first < ch1) ){
                ch2 = it->first ;
                max_2 = it->second;
            }
         }
         if (max_2 != 0 && ch2 != 'l'){
          cout << max_2 << " " << ch2 << endl ;
            continue;
         }
         else {
          cout << max_ << " " << ch1 << endl ;
            continue;
         }
    }
}
