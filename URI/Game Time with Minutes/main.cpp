#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1 , m1 , h2 , m2 ;
    cin >> h1 >> m1 >> h2 >> m2 ;
    if(h2 - h1 > 0 || m2 - m1 > 0){
        cout << "O JOGO DUROU "<< h2 - h1 <<" HORA(S) E "<< m2 - m1 <<" MINUTO(S)" << endl;
    }
    else if(h2 == h1 && m2 == m1)
    {
        cout << "O JOGO DUROU "<< 24 <<" HORA(S) E "<< m2 - m1 <<" MINUTO(S)"<< endl;
    }
    else if(h2 > h1 || m1 > m2)
    {
        cout << "O JOGO DUROU "<< (h2 - h1)+24 <<" HORA(S) E "<< (m2 - m1)+60<<" MINUTO(S)"<< endl;
    }

}
