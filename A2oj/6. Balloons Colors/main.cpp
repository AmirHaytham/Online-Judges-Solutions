#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t ;
    cin >> t ;
    while(t--){
     int n , exf , exl ;
     cin >> n >> exf >> exl ;
     vector<int> v(n+1) ;
     vector<pair<int,int> > vp(2) ;
     for(int i = 1  ; i <= n ; ++i){
        cin >> v[i] ;
     }
     if (v[1] == exf && v[n] == exl){cout << "BOTH\n" ; continue;}
     if (v[1] == exf && v[n] != exl){cout << "EASY\n" ; continue;}
     if (v[1] != exf && v[n] == exl){cout << "HARD\n"; continue;}
     else cout << "OKAY\n";
    }
}
