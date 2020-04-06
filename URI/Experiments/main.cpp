#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <iomanip>
using namespace std;
int ar[100];
int main (){
   cout << fixed <<setprecision(2);
   int n ,total,sumC=0,sumR=0,sumS=0;
   char c;
   cin >> n;
   int ar[n];
   for (int i = 0 ; i < n ;++i)
   {
   	cin >> ar[i];
   	cin >> c;
   	total+=ar[i];
   	if (c=='C'){
   		sumC+=ar[i];
	   }
	if (c=='R'){
   		sumR+=ar[i];
	   }
	if (c=='S'){
   		sumS+=ar[i];
	   }
   }
   cout << "Total: " <<total<<" cobaias"<<endl;
   cout << "Total de coelhos: "<<sumC<<endl;
   cout << "Total de ratos: "<<sumR<<endl;
   cout << "Total de sapos: "<<sumS<<endl;
   cout << "Percentual de coelhos: "<<(double)sumC/total * 100<<" %"<<endl;
   cout << "Percentual de ratos: "<<(double)sumR/total * 100<<" %"<<endl;
   cout << "Percentual de sapos: "<<(double)sumS/total * 100<<" %"<<endl;
}

