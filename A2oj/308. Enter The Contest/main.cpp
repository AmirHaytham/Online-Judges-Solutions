#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
#define upcase (v) transform(all(v) , v.begin() , ::toupper);
#define lowcase(v) transform(all(v) , v.begin() , ::tolower);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t ;
    cin >> t ;
    int cnt = 0 ;
    while(t--){
        cnt++;
       map<char,int> mp ;
    mp['A'] = 2;mp['B'] = 3; mp['C'] = 4; mp['D'] = 5; mp['E'] = 6; mp['F'] = 3; mp['G'] = 4; mp['H'] = 5; mp['I'] = 6; mp['J'] = 7;
    mp['K'] = 4; mp['L'] = 5; mp['M'] = 6; mp['N'] = 7; mp['O'] = 8; mp['P'] = 5; mp['Q'] = 6; mp['R'] = 7; mp['S'] = 8; mp['T'] = 9;
    mp['U'] = 6; mp['V'] = 7; mp['W'] = 8; mp['X'] = 9; mp['Y'] = 10; mp['Z'] = 7;
    string s ;
    cin >> s ;
    long long sum = 0 ;
    for(int i = 0 ; i < s.size() ; ++i){
        sum += mp[s[i]];
    }
    cout << "Case " << cnt << ": "<< sum << endl ;
    }

}
