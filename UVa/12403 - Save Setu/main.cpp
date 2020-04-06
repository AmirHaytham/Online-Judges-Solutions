#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
#define upcase (v) transform(all(v) , v.begin() , ::toupper);
#define lowcase(v) transform(all(v) , v.begin() , ::tolower);
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t ; cin >> t ; long long sum = 0 ;
    string s ;
    while(t--){
        cin >> s ; int n ;
          if (s == "donate"){
            cin >> n ;
            sum+=n;
            continue;
          }
          else {
            cout << sum << endl ;
        }
    }
}
