#include <iostream>

using namespace std;

int main()
{
    int n1 , n2;
    int j ;
    cin >> n1 >> n2;
    for (int i = 1; i <= n2 ; ++i)
    {
        for(j = i ; j <= n1 ; ++j)
        {
                cout << j << " ";

        }
        i = j;

    }

    return 0;

}
