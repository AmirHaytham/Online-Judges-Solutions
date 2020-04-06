#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    double a , b , c , tmp;
    cin >> a >> b >> c;
    if (a < b){
         tmp = a;
         a=b;
         b=tmp;
    }
    if (a < c){
         tmp = a;
         a=c;
         c=tmp;
    }
    if (b < c){
         tmp = b;
         b=c;
         c=tmp;
    }


    if ( a >= (b+c)){
        cout << "NAO FORMA TRIANGULO\n";
    }
    else if ( a*a == (b*b+c*c)){
        cout << "TRIANGULO RETANGULO\n";
    }
    else if( a*a > (b*b+c*c)){
        cout << "TRIANGULO OBTUSANGULO\n";
    }
    else if( a*a < (b*b+c*c)){
        cout << "TRIANGULO ACUTANGULO\n";
    }
    if( a==b&&b==c){
        cout << "TRIANGULO EQUILATERO\n";
    }
    else if(a==b||b==c||c==a){
        cout << "TRIANGULO ISOSCELES\n";
    }
}
