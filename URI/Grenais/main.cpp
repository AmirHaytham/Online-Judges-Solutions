#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int f1 , total = 0 , f2 , cnt[3]={0} , chs;
    while (1){
        start_point:
        cin >> f1 >> f2;
        if (f1 > f2)
        {
            ++cnt[0];
            ++total;
        }
        if (f2 > f1)
        {
            ++cnt[1];
            ++total;
        }
        if (f1 == f2)
        {
            ++cnt[2];
            ++total;
        }
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> chs;
        if (chs == 1)
        {
            goto start_point;
        }
        else break;

    }
    cout << total <<" grenais"<< endl;
    cout << "Inter:" << cnt[0] << endl;
    cout << "Gremio:" << cnt[1] << endl;
    cout << "Empates:" << cnt[2] << endl;
    if (cnt[0]>cnt[1])
    {
      cout << "Inter venceu mais"<< endl;
    }
    else  if (cnt[0]<cnt[1])
    {
      cout << "Gremio venceu mais"<< endl;
    }
    else { cout << "Não houve vencedor"<< endl;}
}
