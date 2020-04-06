#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ;
    cin >> s ;
    if (s[0] != '-'){
        return cout << s << endl , 0 ;
    }
    if (s[2] == '0' && s.size() == 3){
        return cout << 0 << endl , 0 ;
    }
    char a = s[s.size()-1], b = s[s.size()-2] ;
    s.erase(s.begin() + (max(a - '0' , b - '0') == (a - '0')?s.size()-1:s.size()-2));
    cout << s << endl ;
}
