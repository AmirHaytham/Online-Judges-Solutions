#include<bits/stdc++.h>
using namespace std;

main (){
  int chs , cnt[3]={0};
  while(1)
    {
   start_point:
   cin >> chs;
   if (chs == 1)
   {
      ++cnt[0];
   }
   if (chs == 2)
   {
      ++cnt[1];
   }
   if (chs == 3)
   {
      ++cnt[2];
   }
   if (chs == 4)
   {
      break;
   }

   else
   goto start_point;

 }
  cout << "MUITO OBRIGADO" <<endl;
  cout << "Alcool: " << cnt[0] << endl;
  cout << "Gasolina: " << cnt[1] << endl;
  cout << "Diesel: " << cnt[2] << endl;

}
