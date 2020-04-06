#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int size = 100;
    int arr[size];
    for(int i = 0 ; i < size ; ++i)
    {
        cin >> arr[i];
    }
    int maxval = arr[0];
    for(int i = 1 ; i < size ; ++i)
    {
        if(maxval < arr[i])

            {
              maxval = arr[i];
            }
    }
    cout << maxval << endl;
    int  indxmaxval = 0;
    for(int i = 1 ; i < size ; ++i)
    {
        if (arr[indxmaxval] < arr[i])
        {
            indxmaxval = i ;
        }
    }
    cout << ++indxmaxval << endl;
    /*int smallest = arr[0];
    for(int i = 1 ; i < size ; ++i)
    {
        if(smallest > arr[i])

            {
              smallest = arr[i];
            }
    }*/
    return 0;
}
