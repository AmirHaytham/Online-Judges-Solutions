#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , o[2] ,sum = 0;
    cin >> n;
    int temp;
    for (int i = 1 ; i <= n ; ++i)
    {
        cin >> o[0] >> o[1];
        int temp;
        sort(o,o+2);
        ++o[0];
        for (int j = o[0] ; j < o[1] ; ++j)
        {
            if (j%2!=0){sum+=j;}
        }
        cout << sum << endl;
        sum =0;
    }
    return 0;
}
