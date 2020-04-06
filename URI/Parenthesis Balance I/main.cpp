#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;

typedef long long ll ;
int main(){
    string s ; cin >> s ;
    int n = 0  , m = 0 ;
    for (int i = 0 ; i < s.size() ; ++i){
        if (s[i] == '(')n++;
        else if (s[i] == ')')m++;
    }
    cout << ( (m == n) ? "correct" : "incorrect" ) << endl ;
}
