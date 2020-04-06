#include <bits/stdc++.h>

using namespace std;
/*bool isalpha(char ch){
    for(char i = 'a' ; i <= 'z' ; ++i){
        if ( i == ch ){
            return true ;
        }
    }
    return false ;
}*/
int main()
{
    int t ;
    cin >>t ;
    vector<string> ans ;
    while(t--){
        int n ;
        cin >> n ;
        ans.resize(n);
        int indlet = -1 ;
        bool f = 0 ;
        for(int i = 0 ; i < n ; ++i){
            cin >> ans[i] ;
            if (ans[i][0] != '#'){
             indlet = i ;
             f = 1 ;
           }
        }
        /*if (indlet == -1){
            for(int i = 0 ; i < n ; ++i){
             if (i)cout << " " ;
                cout << ans[i];
            }
            cout << endl ;
            continue ;
        }
        else if (indlet == n - 1){
            cout << ans[indlet] << " ";
            for(int i = 0 ; i < indlet ; ++i){
                if (i)cout << " " ;
                cout << ans[i];
            }
            cout << endl ;
            continue ;
        }
        else if (indlet == 0){
            cout << ans[indlet] << " ";
            for(int i = 1 ; i < n ; ++i){
                cout << ans[i] << " ";
            }
            cout << endl ;
            continue ;
        }*/
        if (f){
            for(int i = indlet + 1 ; i < n ; ++i){
                cout << ans[i] << " " ;
             }
            cout << ans[indlet] << " ";
            for(int i = 0 ; i < indlet ; ++i){
                cout << ans[i] << " ";
             }
            cout << endl ;
            continue ;
        }
        else{
            for(int i = 0 ; i < n ; ++i){
                cout << ans[i] << " ";
            }
            cout << endl ;
            continue ;
        }
    }
}

