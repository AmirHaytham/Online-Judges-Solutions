#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[2] , sum = 0 , temp;
    cin >> n[0] >> n[1];
    if (n[0]>n[1]){
        temp = n[0];
        n[0] = n[1];
        n[1] = temp;
    }
    // OR by sort => "Built in function"
    for (int i = n[0] ; i < n[1] ; ++i){
        if (i%2!=0)
        {   if (i==n[0])continue;
            else
            sum+=i;
        }
    }
    cout << sum << endl;
    return 0;
}
