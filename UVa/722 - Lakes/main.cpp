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

char grid[105][105] ;
bool used[105][105];
int dx[] = { 0 , 0 , 1 , -1 };
int dy[] = { 1 , -1 , 0 , 0 };
int n , m , res ;

bool valid(int x , int y){
    return x >= 0 && y >= 0 && x < n && y < m ;
}
void dfs(int x, int y) {
    if( grid[x][y] == '1' || used[x][y] || !valid(x , y) )return;
    used[x][y] = 1 , res++ ;
    f( i , 0 , 4 )dfs( x + dx[i] , y + dy[i] ) ;
}
int main() {
    int tc , x , y ;
    scanf( "%d" , &tc );
    while(getchar() == '\n');
    while(tc--) {
        gets(grid[0]);
        memset(used, 0, sizeof(used));
        sscanf( grid[0] ,"%d %d", &x, &y);
        n = 0 , m ;
        while( gets( grid[n] ) && grid[n][0] )n++   ;

        m = strlen(grid[0]) ;
        res = 0 ;
        dfs( x - 1, y - 1 ) ;

        printf("%d\n" , res);
        if(tc)puts("");

    }
    return 0;
}
