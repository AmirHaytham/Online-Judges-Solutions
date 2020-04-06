#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , m;
    while(true)
    {
        cin >> n >> m;
        if (n == 0 || m==0){break;}
       else if (n>0 && m>0){cout << "primeiro\n";}
       else if (n>0 && m<0){cout << "quarto\n";}
       else if (n<0 && m<0){cout << "terceiro\n";}
       else if (n<0 && m>0){cout << "segundo\n";}

    }
    return 0;
}
