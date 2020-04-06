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

int n ;
char grid[26][26] ;
bool vis[26][26] ;
int dx[] = { 0 ,  0 , 1 , -1 , 1 , -1 ,  1 , -1 } ;
int dy[] = { 1 , -1 , 0 , 0  , 1 , -1 , -1 ,  1 } ;

bool valid (int x ,int y){
        return  ( x >= 0 && y >= 0 && x < n && y < n ) ;
}

void DFS( int x , int y ){
        if( !valid( x , y ) || vis[x][y] || grid[x][y] != '1')return ;
        vis[x][y] = 1 ;
        f(i , 0 , 8)DFS( dx[i] + x , dy[i] + y) ;
}

int main() {
    //freopen("example.txt", "r" ,stdin);
    //freopen("example1.txt", "w" ,stdout);

    int tc = 0 ;
    while(cin >> n ){

        f( i , 0 , n )cin >> grid[i] ;

        memset(vis , 0 , sizeof(vis) ) ;

        int ans = 0 ;
        f( i , 0 , n )f( j , 0 , n )if (!vis[i][j] && grid[i][j] == '1')ans++ ,DFS(i,j) ;
        cout << "Image number " << ++tc << " contains "<< ans <<" war eagles." << "\n" ;
    }


}
