#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;

int main()
{
    cout << fixed <<  setprecision(1) ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n ; cin >> n ;
    double x , y , z ;
    double T , V ;
    vector< pair<double, pair<double , double > > > v ;
    bool f1 = 0 , f2 = 0 , f3 = 0 , f4 = 0 ;
    int times = 0 ;
    while(n--){
        v.clear();
        times++;
        f1 = 0 ; f2 = 0 ; f3 = 0 ; f4 = 0 ;
        for(int i = 0 ; i < 4 ; ++i){
         cin >> x >> y >> z ;
            v.push_back({ x , { y , z }});
        }
        cin >> T >> V ;

        if ( (v[0].first*T + v[0].second.first*V )>= v[0].second.second){
            f1 = 1 ;
        }
        if ( (v[1].first*T + v[1].second.first*V )>= v[1].second.second){
            f2 = 1 ;
        }
        if ( (v[2].first*T + v[2].second.first*V )<= v[2].second.second){
            f3 = 1 ;
        }
        if ( (v[3].first*T + v[3].second.first*V )<= v[3].second.second){
            f4 = 1 ;
        }
        if(f1&&f2&&f3&&f4)cout << times << " " << "SAFE\n" ;
        else cout << times << " " << "UNSAFE\n" ;
    }
}
