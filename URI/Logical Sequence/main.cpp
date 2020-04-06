#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main ()
{
    int n , k = 1;
    cin >> n;
    for (int i = 1 ; i<=n ; ++i)
    {
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << (i*i)+1 << " " << (i*i*i)+1<< endl;

    }

}
