#include <bits/stdc++.h>

using namespace std;
int n ;
char grid[26][26] ;
bool vis[26][26] ;
int dx[] = { 0 ,  0 , 1 , -1 , 1 , -1 ,  1 , -1 } ;
int dy[] = { 1 , -1 , 0 , 0  , 1 , -1 , -1 ,  1 } ;
int main()
{
    //freopen("example.txt", "r" ,stdin);
    //freopen("example1.txt", "w" ,stdout);

    function< int(int , int) > valid = [&] (int i ,int j){
        return  (i >= 0 && j >= 0 && i < n && j < n ) ;
    };

    function< void(int , int)> DFS = [&] (int i ,int j){
            //if ( vis[i][j] || grid[i][j] != '1' || !valid(i,j) ) return ;
            //if( vis[i][j] )return ;
            vis[i][j] = 1 ;
            //DFS(i+1 , j);DFS(i , j+1);DFS(i+1 , j+1);DFS(i-1 , j);DFS(i , j-1);
            //DFS(i-1 , j-1);DFS(i+1 , j-1);DFS(i-1 , j+1);
	    for(int k = 0 ; k < 8 ; ++k){
		int to_x = dx[k] + i ;
		int to_y = dy[k] + j ;
		if ( valid(to_x , to_y) && !vis[to_x][to_y] && grid[to_x][to_y] == '1')
			 DFS(to_x , to_y) ;
	    }
};

    int tc = 0 ;
    while(cin >> n ){

        for(int i = 0 ; i < n ; ++i){
            cin >> grid[i] ;
        }

        memset(vis , 0 , sizeof(vis) ) ;

        int ans = 0 ;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n ; ++j){
                if (!vis[i][j] && grid[i][j] == '1'){
                    ans++  , DFS(i,j) ;
                }
            }
        }
        cout << "Image number " << ++tc << " contains "<< ans <<" war eagles." << "\n" ;
    }


}
