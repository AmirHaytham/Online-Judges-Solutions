#include<bits/stdc++.h>
#define DBG(z) cerr << "here => " << #z << ": " << (z) << endl
#define next_int() ({int __t; scanf("%d", &__t); __t;})
#define mem(f, a) memset(f, a, sizeof(f))
#define LINE cerr << "DEBUG LINE: " << __LINE__ << endl
#define F first
#define S second
#define f(i , s , n) for(int i = s ; i < n ; ++i)
#define sz(v)) (int)v.size()
#define all(v) v.begin(),v.end()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(v) v.begin(),v.end()
#define rall(c) (c).rbegin(), (c).rend()
#define LightedDigits(x) __builtin_popcount(x)
#define mp make_pair
#define mt make_tuple
#define pb push_back

using namespace std;
const int nMAX = 100 ;
char grid[nMAX][nMAX] ;

int dx[] = { 0 , 0 , 1 , -1 };
int dy[] = { 1 , -1 , 0 , 0 };

void dfs( int x , int y ){
    if (grid[x][y] == 'X' || grid[x][y] == '#')return;
    grid[x][y] = '#' ;
    f( i , 0 , 4 )dfs( x+dx[i] , y+dy[i] ) ;
}

int main(){
    int tc ;
    scanf( "%d" , &tc );getchar() ;
    while( tc-- ){
        int n = 0 ;
        while ( gets( grid[n] ) && ( grid[n][0] != '_') )n++;
        f( i , 0 , n )for( int j = 0; grid[i][j]; ++j )if ( grid[i][j] == '*' )dfs(i , j);
        f( i , 0 , n + 1 )puts(grid[i]) ;
    }

}
