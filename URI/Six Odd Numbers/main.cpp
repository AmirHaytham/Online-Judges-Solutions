#include <iostream>

using namespace std;

int main()
{
   int n , cnt = 0 , i = 1;
   cin >> n;
   while(true)
   {
       if (n%2!=0)
       {
           cout << n <<"\n";
           ++cnt;++n;
       }

       if (cnt==6){break;}

   }

    return 0;
}
