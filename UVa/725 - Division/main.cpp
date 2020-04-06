#include <bits/stdc++.h>

using namespace std;

bool AllCom(int n , int m){
   int tmp , used = (m < 10000) ;
            tmp = n ;
            while(tmp){
             used |= 1 << (tmp%10) , tmp /= 10 ;
            }
            tmp = m ;
            while(tmp){
             used |= 1 << (tmp%10) , tmp /= 10 ;
            }
            return ( used == ( 1 << 10 ) - 1 ) ;
}
int main() {

    int n ;
    int cnt = 1 ;
    while(cin >> n && n != 0){
        bool ok = 0 ;
         if (cnt++ > 1)
            cout << "\n" ;
         for(int fghij = 1234 ; fghij <= (98765 / n) ; ++fghij){
            //we need to check in all of the all digit of first and second no.so,
            if (AllCom(fghij*n , fghij)){
                printf("%05d / %05d = %d\n",fghij*n,fghij,n ) ;
                ok = 1 ;
            }
        }

        if (ok == 0)
        cout << "There are no solutions for " << n << "." << "\n" ;
    }

}

