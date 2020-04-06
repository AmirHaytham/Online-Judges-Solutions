#include <bits/stdc++.h>
#define pb push_back
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)


using namespace std;

const int nMAX = 102 ;
vector<int> adj[nMAX] ;
bool vis[nMAX] ;

int main()
{
    FAST ;

    int n , m ;
    stack<int> OrderingTasks ;
	
    function< void (int) > DFS = [&] (int node){
        if (vis[node])return ;
        vis[node] = 1 ;
        for(int &i : adj[node])
            DFS(i);
        OrderingTasks.push(node) ;
    } ;
	
    while(cin >> n >> m && n or m){
        int x , y ; 
        memset(adj , 0 , sizeof adj) ;
        memset(vis , 0 , sizeof vis) ;
        for(int i = 1 ; i <= m ; ++i){
             cin >> x >> y ;
             adj[x].pb(y) ;
        }
        for(int i = 1 ; i <= n ; ++i){
            if ( !vis[i] )
                DFS(i);
        }
        while( !OrderingTasks.empty() ){
         cout << OrderingTasks.top() << " " ;
         OrderingTasks.pop() ;
        }

        cout << "\n" ;
    }
}
