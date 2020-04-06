#include <bits/stdc++.h>

using namespace std;

int n ;
char grid[101][101] ;
bool vis[101][101] ;

int main()
{
    //freopen("example1.txt", "w" ,stdout);

    function< bool(int , int) > valid = [&] ( int i , int j ){
        return ( i >= 0 and j >=0 and i < n and j < n ) ;
    } ;

    function< void (int , int) > DFS = [&] ( int i , int j ){
        if (!valid (i , j) or grid[i][j] == '.' or vis[i][j])return ;
        vis[i][j] = 1 ;
            DFS(i+1 , j);DFS(i , j+1);DFS(i-1 , j);DFS(i , j-1);
    } ;

    int TC ; cin >> TC ;
    int tc = 0 ;
    while(TC--){
        cin >> n ;
        for(int i = 0 ; i < n ; ++i)cin >> grid[i] ;
        int cnt = 0 ;
        memset(vis , 0 , sizeof(vis)) ;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if (grid[i][j] == 'x' and !vis[i][j])
                {
                    DFS(i,j) , cnt++ ;
                }
            }
        }
        cout << "Case " << ++tc << ": " << cnt << "\n" ;

    }
}
