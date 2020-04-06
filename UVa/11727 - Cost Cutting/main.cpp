#include <bits/stdc++.h>

using namespace std;

int main (){
 int n , sal[3] , cnt = 1 ;
 cin >> n;
 while(n--){
   for(int i = 0 ; i < 3 ; ++i){
    cin >> sal[i];
   }
   sort(sal, sal+3);
   cout << "Case " << cnt++ << ": " << sal[1] << endl;
 }


}



