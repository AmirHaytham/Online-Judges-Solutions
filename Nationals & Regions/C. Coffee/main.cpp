#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;

int main()
{
    freopen("coffee.in","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int TC ; cin >> TC ;
    while(TC--){
        int c , p ; cin >> c >> p ;
        map< pair <string , string> , int > diff_drk;
        int tlt = floor(100/p) ;
         for(int i = 0 ; i < c ; ++i){
            string str ; int n1,n2,n3 ;
            cin >> str >> n1 >> n2 >> n3 ;
            diff_drk.insert({ {str , "small" } , n1});
            diff_drk.insert({ {str , "medium"} , n2});
            diff_drk.insert({ {str , "large"} , n3});
         }
        vector< pair<string,int> > pers(p) ;
        for(int i = 0 ; i < p ; ++i){
            string s[3] ;
            cin >> s[0] >> s[1] >> s[2] ;
            int act = (diff_drk[{s[2],s[1]}] + tlt) ;
            if ((act-1) % 5 == 0)act--;else if( (act+1) % 5 == 0)act++;else;
            pers[i] = make_pair(s[0] , act);
        }
        for(auto &obj : pers){
            cout << obj.first << " " << obj.second << "\n" ;
        }
        pers.clear() , diff_drk.clear();
    }
}
