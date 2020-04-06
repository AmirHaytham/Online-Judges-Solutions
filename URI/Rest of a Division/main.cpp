#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[2] ,res;
    cin >> n[0] >> n[1];
    sort(n,n+2);
    ++n[0];
    for (int i = n[0] ; i < n[1] ; ++i)
    {
        if ((i%5==2)||(i%5==3))
        {
                cout << i << endl;
        }

    }
}
