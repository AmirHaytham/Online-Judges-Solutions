#include <iostream>

using namespace std;

int main()
{
    int arr[6] , ctr=0;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        if(arr[i]>=0){++ctr;}
    }
    cout << ctr <<" valores positivos" <<endl;
    return 0;
}
