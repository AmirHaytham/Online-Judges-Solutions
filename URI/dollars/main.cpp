#include <iostream>

using namespace std;

int main()
{
    int n , rem;
    cin >> n;
    int no1;
    no1 = n / 100;
    int r1;
    rem = n % 100;
    r1 = rem;
    r1 = r1 / 20;
    rem = rem % 20;
    int r2;
    r2 = rem  ;
    r2 = r2 / 10;
    int r3;
    rem = rem % 10;
    r3 = rem;
    r3 = r3 / 5;
    int r4;
    rem = rem % 5;
    r4 = rem;
    r4 = r4 / 1;
    int sum = no1+r1+r2+r3+r4;
    cout << sum;

}
