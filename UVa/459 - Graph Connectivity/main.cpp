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
int tc ;
vector< vector<int> >  adjlist ;
vector< bool > vis ;
void DFS( int u ){
    if ( vis[u] )return ;
    vis[u] = 1 ;
    for( int i : adjlist[u] )
        if ( !vis[i] )
            DFS(i) ;

}
int main() {
    cin >> tc ;
    while( tc-- ){
        char ch , ch2[2] ; cin >> ch ; getchar() ;
        int n = ch - 'A' + 1 ;
        adjlist.assign( n , vector<int>() ) ;
        vis.assign( n , 0 ) ;
        while( gets(ch2) && ch2[0] ){
            adjlist[ ch2[0] - 'A' ].pb( ch2[1] - 'A' );
            adjlist[ ch2[1] - 'A' ].pb( ch2[0] - 'A' );
        }
        int cnt = 0 ;
        f(i , 0 , n )if( !vis[i] )DFS(i),cnt++;

        tc == 0 ? cout << cnt << "\n": cout << cnt << "\n\n" ;
        adjlist.clear();
        vis.clear();
    }

}
