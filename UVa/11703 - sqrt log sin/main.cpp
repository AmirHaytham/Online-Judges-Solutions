#include<bits/stdc++.h>

using namespace std;

int x[1000001] = {1} ;
int a , b , c , in ;
int main()
{
    for(int i = 1 ; i <= 1000000 ; ++i){

        a = static_cast<int>(i - sqrt(i)),
        b =static_cast<int>(log(i)) ,
        c =static_cast<int>(i*sin(i)*sin(i)) ;
        x[i] = (x[a] + x[b] + x[c])%static_cast<int>(1e6) ;
    }
    while( scanf("%d",&in) == 1 && in != -1 ){
        cout << x[in] << "\n" ;
    }
}
