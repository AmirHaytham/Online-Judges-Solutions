#include <bits/stdc++.h>

using namespace std;

int previ , curr  , who , students , succ_students , wishToAdmin ;
const int nMAX = 100001 ;
vector<int> adj[nMAX] ;
bool vis[nMAX] ;
int ans[nMAX];
stack<int> ordered ;

int main()
{

    function< void (int) > DFSTopSort = [&] (int node){
        if (vis[node])return ;
        vis[node] = 1 ;
        for(int &i : adj[node])
            DFSTopSort(i) ;
        ordered.push(node);
    };

    cin >> students >> succ_students ;

    for(int i = 1 ; i <= succ_students ; ++i){
        cin >> wishToAdmin ;
        for(int j = 0; j < wishToAdmin; j++){
             cin >> who ;
            adj[i].push_back(who);
        }
    }

    for(int i = 1 ; i <= students ; ++i){
        if (!vis[i])DFSTopSort(i) ;
    }

    while(!ordered.empty()){
        curr = ordered.top() ;
        ans[curr] = previ ;
        previ = curr ;
        ordered.pop() ;
    }

    for(int i = 1 ; i <= students ; ++i)
		printf("%d\n", ans[i]);
}
