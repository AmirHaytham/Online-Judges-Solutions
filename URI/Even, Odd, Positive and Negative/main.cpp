#include <iostream>

using namespace std;

int main()
{
    int n , e = 0 , p = 0 , neg = 0 , u = 0;
    for (int i = 1 ;i <= 5 ; ++i){
        cin >> n;
        if (((n>=0)||(n<0))&&(n%2==0)){++e;}
        if (n>0){++p;}
        if (n<0){++neg;}
        if (((n>0)||(n<0))&&(n%2!=0)){++u;}
    }
    cout << e <<" valor(es) par(es)" << endl;
    cout << u <<" valor(es) impar(es)" << endl;
    cout << p <<" valor(es) positivo(s)" << endl;
    cout << neg <<" valor(es) negativo(s)" << endl;
    return 0;
}
