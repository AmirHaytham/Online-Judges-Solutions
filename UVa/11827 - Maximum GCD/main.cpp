#include <bits/stdc++.h>

using namespace std;

int TC , tmp , max_ ;
vector<int> v ;
int nom ;

int main() {

   cin >> TC ;
   string s ;
   getline(cin , s);
   while(TC-->0){
         getline(cin , s);
         istringstream iss(s) ;
         nom = 0 ;
         while(iss >> tmp){v.push_back(tmp);}
         max_ = 0 ;
         for(int i = 0 ; i < (int)v.size() ; ++i){
            for(int j = i + 1 ; j < (int)v.size() ; ++j){
                max_ = max( max_ , __gcd( v[i] , v[j] ) ) ;
            }
         }
         cout << max_ << "\n" ;
         v.clear() ;
   }

}
