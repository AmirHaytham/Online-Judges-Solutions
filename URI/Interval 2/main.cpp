#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m , cnt_in = 0 , cnt_out = 0;
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> m;
        if (m>=10&&m<=20){++cnt_in;}
        else {++cnt_out;}
    }
    cout << cnt_in <<" in" << endl;
    cout << cnt_out <<" out" << endl;
    return 0;
}
