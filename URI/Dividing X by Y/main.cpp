#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int n , m , y;
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> m >> y;
        if ( y == 0){cout << "divisao impossivel\n";}
        else
        cout << (double)m/y << endl;
    }

    return 0;
}
