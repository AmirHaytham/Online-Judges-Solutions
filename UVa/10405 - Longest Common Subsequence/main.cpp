#include <bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll ;
string a , b ;
int dp[1234][1234] ;

int solve(int i ,int j){
    if (i == (int)a.size() || j == (int)b.size() )
        return 0 ;
    if (dp[i][j] != -1)
        return dp[i][j] ;
    if (a[i] == b[j])
        return dp[i][j] = solve(i+1,j+1)+1 ;
    return dp[i][j] = max( solve(i+1,j) , solve(i,j+1) ) ;
}
int main()
{
    //freopen("out.txt" , "w" , stdout) ;
    while( getline(cin , a) && getline(cin , b) ){
        memset(dp , -1 , sizeof dp) ;
        cout << solve(0,0) << endl  ;
    }


}
