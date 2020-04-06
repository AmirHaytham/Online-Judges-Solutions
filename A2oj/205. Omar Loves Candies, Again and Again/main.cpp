#include <bits/stdc++.h>

using namespace std;
typedef long long ll ;

bool SortSec(pair<int,int> &a , pair<int,int> &b ){
    return a.second < b.second ;
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int bags , coins ;
        cin >> bags >> coins ;
        vector<pair<int,int> > vp ;
        int cnt = 0 ;
        for(int i = 0 ; i < bags ; ++i){
            int one , two ;
            cin >> one >> two ;
            vp.push_back({one,two});
        }
       sort(vp.begin() , vp.end());
        for(int i = 0 ; i < bags ; ++i){
            if (vp[i].first == vp[i+1].first && vp[i].second == vp[i+1].second){
                continue;
            }
            if (vp[i].first <= coins){
                coins-=vp[i].first;
                cnt++;
            }
            coins+=vp[i].second;
        }
        cout << cnt << endl ;
    }

}
