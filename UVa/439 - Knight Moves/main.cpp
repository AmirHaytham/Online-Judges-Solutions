#include <bits/stdc++.h>

using namespace std;

string n , m ;
map<char , int> mp ;
const int nMAX = 10 ;
int  moves_cost[nMAX][nMAX] ;
bool vis[nMAX][nMAX] ;
int dirRow [] = { 2 ,  2 , -2 , -2 , 1 , 1  , -1 , -1 } ;
int dirCow [] = { 1 , -1 , 1  , -1 , 2 , -2 , 2  , -2  } ;

int main(){

    //freopen("amir.out" , "w" , stdout) ;

    function< bool(int,int) > valid = [&] (int r , int c){
        return ( r >= 0 && c >= 0 && r < 8 && c < 8 ) ;
    };

    function< int(tuple<int,int,int,int>) > BFS = [&](tuple<int,int,int,int> tp){
        memset(moves_cost , -1 , sizeof(moves_cost)) ;
        queue< pair<int,int> > q ;
        int endRow = get<2>(tp), endCol = get<3>(tp) ;
        q.push( { get<0>(tp) , get<1>(tp) } ) ;
        moves_cost[get<0>(tp)][get<1>(tp)] = 0 ;
        while(!q.empty()){
            pair<int,int> curr = q.front() ; q.pop() ;
            if (curr.first == endRow && curr.second == endCol )return moves_cost[curr.first][curr.second] ;
            for(int i = 0 ; i < 8 ; ++i){
                int updatedRow = curr.first  + dirRow[i] ;
                int updatedCol = curr.second + dirCow[i] ;
                if(!valid(updatedRow,updatedCol))continue ;
                moves_cost[updatedRow][updatedCol] = 1 + moves_cost[curr.first][curr.second] , q.push({updatedRow , updatedCol}) ;
            }
        }
    };

    for(int i = 0 ; i <= 8 ; ++i){
        mp['a'+i] = i  ;
    }
    while(cin >> n >> m){
        int start = n[1] - '0' , end_ = m[1] - '0' ;
        tuple<int,int,int,int> tp { mp[ n[0] ] , start-1 , mp[ m[0] ] , end_ -1  } ;
        int moves = BFS(tp) ;
        cout << "To get from " << n << " to " << m << " takes " << moves << " knight moves." << "\n" ;
    }
}
