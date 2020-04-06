#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;

int main()
{
    string s ;
    int n = 0 ;
    while(cin >> s && s != "*"){
        n++;
        if (s == "Hajj"){
            cout << "Case " << n << ": " <<  "Hajj-e-Akbar\n" ;
        }
        else {
            cout << "Case " << n << ": " <<  "Hajj-e-Asghar\n" ;
        }
    }
}
