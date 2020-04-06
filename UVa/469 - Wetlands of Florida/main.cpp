#include <bits/stdc++.h>

using namespace std;

int dx[] = { 0  , 0 , -1 , 1 , 1 , -1 , 1  , -1 } ;
int dy[] = { -1 , 1 , 0  , 0 , 1 , -1 , -1 , 1  } ;
vector<string > grid(100) ;
bool vis[100][100] ;
int tc ;
int cnt ;
int n , k ;
bool valid(int to_x ,int to_y){
    return to_x >= 0 && to_y >= 0 && to_x < grid[n].length() && to_y < grid[n].length() ;
}
void DFS(int i , int j){
    if ( vis[i][j] )return ;
    vis[i][j] = 1 ;
    for(int k = 0 ; k < 8 ; ++k){
        int to_x = dx[k] + i ;
        int to_y = dy[k] + j ;
        if ( !vis[to_x][to_y] && grid[to_x][to_y] == 'W' && valid(to_x , to_y) )
                cnt++ , DFS(to_x , to_y) ;
    }
}

int main()
{
    cin >> tc ;
    //cout << "\n" << "\n" ;
    while(tc--){
        memset(vis , 0 , sizeof vis) ;
        int idx = 0 ;
        while(cin >> grid[idx]){
            idx++ ;
        }
        while(cin >> n >> k){
            memset(vis , 0 , sizeof vis) ;
            cnt = 0 ;
            n-- , k-- ;
            DFS(n , k) ;
            cout << cnt << "\n" ;
        }
        grid.clear() ;
    }
}
