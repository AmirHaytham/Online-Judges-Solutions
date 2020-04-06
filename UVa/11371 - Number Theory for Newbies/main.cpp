#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;
int64_t str_int(string s){
    int64_t rev = 0 ;
    for(int i = 0 ; i < s.size() ; ++i){
        rev = rev * 10 + (s[i] - '0');
    }
    return rev ;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string n1 ;
    while(cin >> n1){
     sort(n1.begin() , n1.end());
     string tmp ;
     if (n1[0] == '0'){
      for(int i = 1 ; i < n1.size() ; ++i){
             if (n1[i] != '0'){
                n1[0] = n1[i];
                n1[i] = '0';
                break;
             }
         }
     }
     /*  while(tmp){
       int t = tmp % 10 ;
       rev = rev*10 + t ;
       tmp /= 10 ;
    }*/
    //ll max_ = max(str_int(n1) , str_int(tmp)) ;
    //ll min_ = min(str_int(n1) , str_int(tmp)) ;
    //ll dif = max_ - min_ ;
     //if ( ( (max_ - min_) % 9 != 0 ) ) continue;
     tmp = n1 ;
     sort(tmp.rbegin() , tmp.rend());
     cout <<  max(str_int(n1) , str_int(tmp)) << " - " << min(str_int(n1) , str_int(tmp)) << " = " <<
     max(str_int(n1) , str_int(tmp)) - min(str_int(n1) , str_int(tmp)) << " = " << "9" << " * "
     <<  ((max(str_int(n1) , str_int(tmp)) - min(str_int(n1) , str_int(tmp))) / 9) << endl;
    }
}
