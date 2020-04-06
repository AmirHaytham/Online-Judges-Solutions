#include <iostream>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main()
{
    FAST;
    int n , m , c ;
    while(cin >> n >> m >> c && m != 0)
    {
        int rem = c==1?1:0;
        cout << ((n-7)*(m-7) + rem )/2 << endl ;
    }
    return 0;
}
