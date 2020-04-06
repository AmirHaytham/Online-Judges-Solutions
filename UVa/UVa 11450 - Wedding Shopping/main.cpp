#include <bits/stdc++.h>

using namespace std;

int TC , score , M , C , price[25][25];
int ans ;
int memo[210][25] ;
int shop(int money , int g){
    if (money < 0)return -1e9 ;
    if (g == C)return M - money ;
    if (memo[money][g] != -1)return memo[money][g] ;
    int ans = -1 ;
    for(int i = 1 ; i <= price[g][0] ; ++i)
        ans = max(ans , shop(money - price[g][i] , g+1) ) ;
    return memo[money][g] = ans ;

}
int main()
{
    //freopen("tmp.in" , "r" , stdin);
    //freopen("tmp.out" , "w" , stdout);
    cin >> TC ;
    while(TC--){
        cin >> M >> C ;
        for(int i = 0 ; i < C ; ++i){
            cin >> price[i][0] ;
            for(int money = 1 ; money <= price[i][0] ; ++money)
                cin >> price[i][money] ;
        }
        memset(memo , -1 , sizeof memo) ;
        score = shop(M , 0) ;
        if (score < 0 ) cout << "no solution\n";
        else cout << score << "\n";
    }
}
