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
char grid[205][205];
bool  vis[205][205];
int dx[]={0,0,1,-1,1,-1};
int dy[]={1,-1,0,0,1,-1};
int n , b;

bool valid (int x , int y){
    return x >= 0 && y >= 0 && x < n && y < n ;
}
bool black(){
    stack< pair<int, int> > stk;
    pair<int, int> pii;

    f( i , 0 , n )if(grid[0][i]=='b'){stk.push( mp(0,i) );vis[0][i] = true ;}

    while( !stk.empty() ){
        pii = stk.top();stk.pop() ;

        if( pii.first == n - 1 ) return true;

        f( i , 0 , 6 )
        if( grid[ pii.F + dx[i] ][ pii.S+dy[i] ] == 'b' && !vis[ pii.F + dx[i] ][ pii.S+dy[i] ]){
                vis [ pii.F + dx[i] ][ pii.S+dy[i] ] = true;
                stk.push( mp( pii.F + dx[i] , pii.S+dy[i] ) );
        }

    }
    return false;
}

int main()
{
    int cs=1;
    while(scanf("%d",&n) && n) {
        f( i , 0 , n )scanf("%s",&grid[i]);
        memset( vis, 0, sizeof(vis) );

        if( black() )printf("%d B\n",cs++) ;
        else printf("%d W\n",cs++)  ;
    }
    return 0;
}
