#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int>  adj[101] ;
vector<bool> vis[101] ;
void DFS(int u = 0){
    if (vis[adj[u]]) return ;
    for(int i = 0 ; i < adj[i].size() ; ++i){
            if (!vis[adj[u][i]])
                DFS(adj[u][i]);
    }
}

int main()
{
    int TC ; cin >> TC ;
    while(TC--){
        int n ; cin >> n ;
        for(int i = 0 ; i < n ; ++i){
            for(int j = 0 ; j < n ; ++j){
                int inp ; cin >> inp ;
                adj[i][j] = inp ;
            }
        }
        DFS();


    }

}
