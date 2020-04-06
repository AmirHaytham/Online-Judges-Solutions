#include <bits/stdc++.h>
using namespace std;
int main(){
unsigned int n;
while(cin >> n && n!=0)
{
unsigned int sq = sqrt(n);
cout << (sq*sq == n ? "yes\n" : "no\n");
}
}
