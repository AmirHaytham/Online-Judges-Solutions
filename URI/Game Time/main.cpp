#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double s , e = 0.00 , n = 0.00;
        cin >> s;
    if (s >= 0.00 && s <= 400.00){
        e =  s * (15.00/100);
        n = s + s * (15.00/100);
    cout << "Novo salario: " << n <<endl;
    cout << "Reajuste ganho: " << e <<endl;
    cout << "Em percentual: 15 %" << endl;
    }
    if (s >= 400.01 && s <= 800.00){
        e  = s * (12.00/100);
        n = s + s * (12.00/100);
    cout << "Novo salario: " << n <<endl;
    cout << "Reajuste ganho: " << e <<endl;
    cout << "Em percentual: 12 %" << endl;
    }
    if (s >= 800.01 && s <= 1200.00){
        e  = s * (10.00/100);
        n = s + s * (10.00/100);
    cout << "Novo salario: " << n <<endl;
    cout << "Reajuste ganho: " << e <<endl;
    cout << "Em percentual: 10 %" << endl;
    }
    if (s >= 1200.01 && s <= 2000.00){
        e  = s * (7.00/100);
        n = s + s * (7.00/100);
    cout << "Novo salario: " << n <<endl;
    cout << "Reajuste ganho: " << e <<endl;
    cout << "Em percentual: 7 %" << endl;
    }
    if (s > 2000.00){
        e  = s * (4.00/100);
        n = s + s * (4.00/100);
    cout << "Novo salario: " << n <<endl;
    cout << "Reajuste ganho: " << e <<endl;
    cout << "Em percentual: 4 %" << endl;
    }
    return 0;
}
