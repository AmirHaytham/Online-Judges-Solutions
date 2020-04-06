#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    int k = 1;
    cin >> n;
    for (int j = 1 ; j <= n ; ++j)
    {
      for(int i = 1 ; i <= 3 ; ++i)

        {
                cout << k <<" ";
                k+=1;
        }
        cout << "PUM\n";
        k+=1;
    }


    return 0;
}
