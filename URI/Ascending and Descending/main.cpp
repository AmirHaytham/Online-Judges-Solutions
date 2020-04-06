#include <iostream>

using namespace std;

int main()
{
    int n , m ;
    while (cin >> m >> n)
    {
      if (m==n){return 0;}
      else
        {
          if (m > n)
          {
            cout <<"Decrescente\n";
          }

          else if(n>m)
          {
             cout <<"Crescente\n";
          }
        }
    }

}
