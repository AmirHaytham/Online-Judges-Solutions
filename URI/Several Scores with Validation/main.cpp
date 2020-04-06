#include <iomanip>
#include <bits/stdc++.h>
 using namespace std;
 main (){
   cout << fixed << setprecision(2);
   float dgr , sum = 0.00;
   int cnt=0;
   short chs;
   while (1){
    first_start_point:
    cin >> dgr ;
    if ((dgr>=0.00)&&(dgr<=10.00))
    {
        sum+=dgr;
        ++cnt;
    }
    else cout << "nota invalida\n";
    if (cnt == 2)
    {
      cout << "media = " << sum/2 << endl;
    startpoint:
    cout << "novo calculo (1-sim 2-nao)\n";
    cin >> chs;
    if (chs == 2)
    {
        break;
    }
    else if (chs == 1 )
    {
        sum = 0.00;
        cnt=0;
        goto first_start_point;
    }

    else {goto startpoint;}
   }
    }


}
