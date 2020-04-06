#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , b ;
    cin >> n;
    for (int i = 1 ; i <= n ; ++i)
    {
        cin >> b;
        if ( (b<0) && (b%2!=0) ){cout << "ODD NEGATIVE\n";}
        if ( (b>0) && (b%2!=0) ){cout << "ODD POSITIVE\n";}
            if (b==0)            {cout << "NULL"<<"\n";}
        if ( (b>0) && (b%2==0) ){cout << "EVEN POSITIVE\n";}
        if ( (b<0) && (b%2==0) ){cout << "EVEN NEGATIVE\n";}
    }
    return 0;
}
