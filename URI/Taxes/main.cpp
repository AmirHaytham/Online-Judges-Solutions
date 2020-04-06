#include <bits/stdc++.h>
 using namespace std;

int main (){
    cout << fixed << setprecision(2);
   double n = 0 , f1 = 0 , f2 = 0 , f3 = 0;
   cin >> n;
   if (n <= 2000)
    cout << "Isento\n";
   else if (n>2000 && n <= 3000)
   {
        n-=2000;
        cout << "R$ " << n*.08 << endl;return 0;
   }
   else if (n>3000 && n <= 4500)
   {
        f1 = n - 2000;
        f2 = f1 - 1000;
        f1-=f2;
        f2*=0.18;
        double res = f1*.08;
        double sum = res + f2;
        cout << "R$ " << sum << endl;return 0;
   }
   else if (n > 4500.00)
   {
        f1 = n - 2000,00;
        f2 = f1 - 1000,00;
        f3 = f2 - 1500,00;
        f1-=f2;
        f2-=f3;
        f3*=0.28;
        double res = f1*.08;
        double res2 = f2 * .18;
        cout << "R$ " << res+res2+f3 << endl;return 0;
   }
}
