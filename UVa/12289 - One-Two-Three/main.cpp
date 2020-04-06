#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;

int main()
{
    int n ; cin >> n ;
    while(n--){
        string s ; cin >> s ;
        if (s.size() == 5){
            cout << "3" << endl ;
        }
        else{
            if (s.find ("on") != -1 || s.find ("ne") != -1 || (s.find ("o") != -1 && s.find ("e") != -1) )
                cout << "1" << endl ;
            else cout << "2" << endl  ;
        }

    }

}
