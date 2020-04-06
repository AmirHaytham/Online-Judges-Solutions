    #include <bits/stdc++.h>

    using namespace std;
    typedef long long ll ;
    ll cvrt(string s ){
        int n = 0 , pow = 10 ;
        for(int i = 0 ; i < s.size() ; ++i){
           n = n*pow + (s[i]-'0');
        }
        return n;
    }
    int main (){
        string s  , tmp ;
        while(cin >> s ){
         sort(s.begin() , s.end());
         tmp = s ;
         reverse(tmp.begin() , tmp.end());
         ll max_ = max (abs(tmp - s) , abs(s - tmp));
          if (tmp >= s && (max_%9 == 0)){
                 cout << tmp << " - " << s << " = " << 1ll*max_ << " = " << 9 << " * " << 1ll*(max_/9) << endl ;
                 continue ;
          }
          if (tmp <= s && (max_%9 == 0)){
               cout << s << " - " << tmp << " = " << 1ll*max_ << " = " << 9 << " * " << 1ll*(max_/9) << endl ;
               continue ;
          }
       }

    }
