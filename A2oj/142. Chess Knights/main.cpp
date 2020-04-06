#include <bits/stdc++.h>

using namespace std;

int row , col , standx , standy ;
const int nMAX = 201 ;
bool vis[nMAX][nMAX] ;
int dirRow [] = { 2 ,  2 , -2 , -2 , 1 , 1  , -1 , -1  } ;
int dirCow [] = { 1 , -1 , 1  , -1 , 2 , -2 , 2  , -2  } ;

bool valid(int r , int c){
    return ( r >= 0 && c >= 0 && r < row && c < col ) ;
}

int BFS (int standx , int standy) {
    memset(vis , 0 , sizeof(vis));

        int cnt = 0 ;
        queue< pair<int,int> > q ;
        q.push( {standx , standy} ) , vis[ standx ][ standy ] = 1 ;

        while(!q.empty()){
            pair<int,int> curr = q.front() ; q.pop() ;
             for(int i = 0 ; i < 8 ; ++i){
                int updatedRow = curr.first  + dirRow[i] ;
                int updatedCol = curr.second + dirCow[i] ;
                if(!valid(updatedRow,updatedCol) || vis[updatedRow][updatedCol])continue ;
                 cnt++ ; q.push({updatedRow , updatedCol}) , vis[updatedRow][updatedCol] = 1 ;
            }
        }

    return cnt ;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int TC ; cin >> TC ;
    while(TC--){
        cin >> row >> col >> standx >> standy ;
        cout << BFS(standx-1 , standy-1) + 1 << "\n" ;
    }
}
