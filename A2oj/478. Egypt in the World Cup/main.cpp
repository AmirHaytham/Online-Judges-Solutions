#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    while (n--){
       int g ;
       cin >> g ;
       vector< pair<string , int> > mp ;
       for(int i = 0  ; i < g ; ++i){
        string s ; int p ;
        cin >> s >> p ;
        mp.push_back(make_pair(s , p));
       }
       int max_ = mp[0].second;
       string mxct  = mp[0].first;
        for(int i = 1 ; i < mp.size() ; ++i){
            if(max_ < mp[i].second){
                max_ = mp[i].second;
                mxct = mp[i].first;
            }
        }
        cout << mxct << endl ;
    }
}
