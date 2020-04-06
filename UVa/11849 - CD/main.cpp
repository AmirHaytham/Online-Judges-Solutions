#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,m ;
    vector<int> v1 , v2;
    while(cin >> n && cin >> m && n != 0 && m != 0 ){
        v1.resize(n);v2.resize(m);
        map<int,int> mp ;
        for(int i = 0 ; i < n ; ++i){
            cin >> v1[i] ;
            mp[v1[i]]++;
        }
        for(int i = 0 ; i < m ; ++i){
            cin >> v2[i] ;
            mp[v2[i]]++;
        }
         vector<int> tmp ;
         int min_ = min (v1.size() , v2.size());
         if (min_ == v1.size())
         tmp = v1 ;
        else tmp = v2 ;
        int cnt = 0 ;
        for(int i = 0 ; i < min_ ; ++i){
            if (mp[tmp[i]] > 1)cnt++;
        }
        cout << cnt << endl ;
        v1.clear();v2.clear();tmp.clear();mp.clear();
    }
}
