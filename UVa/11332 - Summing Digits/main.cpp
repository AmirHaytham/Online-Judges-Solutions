#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;
typedef long long ll ;
void MakeItOneDigit(ll &n) {
    ll SumDigit = 0 ;
    while (n){
        int tmp = n % 10 ;
        SumDigit += tmp ;
        n /= 10;
    }
    n = SumDigit ;
}
bool IsOne(ll n){
    ll cnt = 0 ;
    while(n){
        cnt++;
        n /= 10 ;
    }
    return (cnt == 1 ? 1 : 0);
}
int main()
{

    ll n ;
    while(cin >> n && n != 0){
    do{
       MakeItOneDigit(n);
    }
    while(!IsOne(n));
    cout << n << endl ;
    }
}
