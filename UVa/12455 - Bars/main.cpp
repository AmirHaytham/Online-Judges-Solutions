#include <bits/stdc++.h>

using namespace std;

int main()
{
    int TC ; cin >> TC ;
    while(TC--){
        int required ; cin >> required ;
        int n; bool ok = 1; cin >> n;
        vector<int> v(n) ;
        for(int i = 0; i < n; ++i)cin >> v[i];

        for(int i = 0; i < (1 << n); ++i){
            int sum = 0 ;
            for(int j = 0; j < n; ++j){
                if (i & (1 << j))
                    sum += v[j] ;
            }
            if(sum == required){
                cout << "YES\n";
                ok = 0;
                break;
            }
        }
        if (ok)cout << "NO\n";
    }
}
