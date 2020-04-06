#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string s ; getline(cin , s);
    for(int i = 0 ; i < s.size() ; ++i){
        if (s[i] == ' '){
            s.erase(s.begin() + i);
        }
    }
    cout << s ;

}
