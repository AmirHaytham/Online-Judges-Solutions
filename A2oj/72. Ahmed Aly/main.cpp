#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t , mra = 0;
    cin >> t ;
    while(t--){
        mra++;
        int n1 , n2 ;
        char ch ;
        cin >> n1 >> ch >> n2 ;
        char eql ;
        cin >> eql ;
        int tlt ;
        cin >> tlt ;
        cout << "Case " << mra << ": ";
        switch(ch){
            case '+' :
            {
                n1=n1+n2;
                if ( tlt == n1){
                 cout << "YES\n";continue;
                }
                else{cout << "NO\n";continue;}

            }
            case '-' :
            {
                n1=n1-n2;
                if ( tlt == n1){
                 cout << "YES\n";continue;
                }
                else{cout << "NO\n";continue;}

            }

        }
    }
}
