#include <bits/stdc++.h>
#define sz(v) (int)v.size()
#define all(v) v.begin() , v.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

typedef long long ll ;

int main() {
     fast;
     //int t ; cin >> t ;
     map<char,int> mp ;
     string s ;
     while(1){
        getline(cin,s) ;
        if (s == "*")break;
        mp[tolower(s[0])]++;
        int cnt = 1 ;
        for(int i = 1 ; s[i]!='\0' ; ++i){
            if (s[i] == ' ')
                mp[tolower(s[i+1])]++ , cnt++;
        }
        cout << (mp[tolower(s[0])] == cnt ? "Y" : "N") << endl ;
        mp.clear();
     }
}
