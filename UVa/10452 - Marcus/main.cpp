#include <bits/stdc++.h>
#define pb push_back

using namespace std ;

const int nMAX = 10 ;
char grid[nMAX][nMAX] ;
bool vis[nMAX][nMAX] ;
int row , col , TC ;

int dx [] = {0 , -1 , 0  } ;
int dy [] = {1 , 0  , -1 } ;

string TheRightWay = "IEHOVA#" ;
vector<string> Directions = { "right" , "forth" , "left" } ;
vector<string> ans ;

int main(){

    function< bool(int , int) > valid = [&](int i , int j){
        return ( i >= 0 && j >= 0 && i < row && j < col ) ;
    };

    function< void (int,int,int) > DFS = [&](int i , int j  , int idx){
        if ( !valid(i,j) && idx > (int)(TheRightWay.size() - 1) )return ;
        for(int iloop = 0 ; iloop < 3 ; ++iloop){
            int x = i + dx[iloop] ;
            int y = j + dy[iloop] ;
            if ( valid(x,y) && grid[x][y] == TheRightWay[idx] )
                ans.pb(Directions[iloop]) , DFS( x , y , ++idx );
        }
    };

    cin >> TC ;

    while(TC--){
        cin >> row >> col ;
        memset(vis , 0 , sizeof vis) ;
        ans.clear();

        for(int i = 0 ; i < row ; ++i)
            cin >> grid[i] ;
        int pos ;
        for(int i = 0 ; i < col ; ++i){
            if(grid[row - 1][i] == '@'){
                pos = i ;break;
            }
        }


        DFS( row - 1 , pos , 0 ) ;
        for(int i = 0 ; i < (int)ans.size() ; ++i)
            cout << ans[i] << " \n"[i == (int)ans.size() - 1] ;
    }

}
