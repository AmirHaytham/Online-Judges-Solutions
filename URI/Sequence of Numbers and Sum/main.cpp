#include <iostream>

using namespace std;

int main()
{
    int n , m , sum=0;
    while (cin >> m >> n)
    {
      sum=0;
      if (m<=0||n<=0){return 0;}
      else
        {
            if (m > n)
            {
                for (int i = n ; i <= m ; ++i)
              {
                 cout << i << " ";
                 sum+=i;
              }

            }

           else if(n>m)
            {
                for (int i = m ; i <= n ; ++i)
              {
                 cout << i << " ";
                 sum+=i;
              }

            }
        }

      cout << "Sum=" << sum <<endl;
    }

}
