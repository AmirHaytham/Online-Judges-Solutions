#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
#define upcase (v) transform(all(v) , v.begin() , ::toupper);
#define lowcase(v) transform(all(v) , v.begin() , ::tolower);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t ; cin >> t ;
    int n , m ;
    vector<int> v ;
    vector<int> vis ;
    map<int,int> mp ;
    while(t--){
        cin >> n >> m ;
        v.resize(n);
        for(int i = 0 ; i < n ;++i){
            cin >> v[i] ;
        }
        for(int i = 0 ; i < n ;++i){
            mp[v[i]]++;
        }
        vector<int> tmp(all(v)) ;
        vis.resize(*max_element(all(tmp)) + 1);
        tmp.erase(unique(all(tmp)) , tmp.end());
        long long sum = 0 ;
        for(int i = 0 ; i < tmp.size() ; i++){
            vis[tmp[i]] = 1 ;
        }
        for(int i = 0  ; i < m ; ++i){
            if (v[i] == 0){v.erase(v.begin()+i);--i;continue;}
            if (vis[v[i]]){
                sum += mp[v[i]];
                vis[v[i]]i = 0;
            }
        }
        cout << sum << endl ;
        vis.clear();
        tmp.clear();
        v.clear() ;
        mp.clear();
    }
}

