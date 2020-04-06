#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        long long g , c , e ;
        cin >> g >> c >> e ;

        if (g == 1){
            cout << (c>=e?0:(e - c)*1 )<< endl ;
            continue;
        }
        if (g == 2){
           cout <<( c>=e?0:(e - c)*2 )<< endl ;
             continue;
        }
        if (g == 3){
             cout << (c>=e?0:(e - c)*3 )<< endl ;
            continue;
        }

    }
}
