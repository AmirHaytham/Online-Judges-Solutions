/*#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float x = -1, y = -1;

    do{
        cin >> x;
        if(x < 0 || x > 10)
            cout << "nota invalida" << endl;

    }while(x < 0 || x > 10);

    do{
        cin >> y;
        if(y < 0 || y > 10)
            cout << "nota invalida" << endl;

    }while(y < 0 || y > 10);

    cout << "media = " << fixed << setprecision(2) << ((x + y) / 2) << endl;

    return 0;
}*/
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main (){
 cout << fixed << setprecision(2);
 float dgr , sum = 0.00;
 int cnt = 0;
 while (cnt!=2)
 {
     cin >> dgr;
    if ((dgr >= 0.00) && (dgr <=10.00))
    {
      sum+=dgr;
      ++cnt;
    }
    else
        cout << "nota invalida\n";
 }
 cout << "media = " << (float)sum/2 <<endl;
}
