#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double n , sum = 0;
    int cnt = 0;
    for (int i = 1 ; i <= 6 ;++i){
        cin >> n;
        if (n >= 0){
        ++cnt;
        sum += n;
        }
    }
    cout << cnt << " valores positivos" << endl << sum/cnt <<endl;
    return 0;
}
