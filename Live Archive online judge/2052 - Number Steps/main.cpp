#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        int x , y ;
        cin >> x >> y ;
        if ( (x & 1 && y & 1) ){
            cout << x + y - 1 << endl ;
        }
        else if (((x % 2 == 0) && (y % 2 == 0))){
            cout << x + y << endl ;
        }
        else cout << "No Number\n" ;
    }
}
