#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main (){
 int m[2],sum=0;
 cin >> m[0] >> m[1];
 sort(m,m+2);
 for (int i = m[0] ; i <= m[1] ; ++i)
 {
     if (i%13!=0)
     {
         sum+=i;
     }
 }
 cout << sum <<endl;


}
