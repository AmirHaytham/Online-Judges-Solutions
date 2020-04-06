#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char , int> mp ;
    //vector<map<char ,int> > v ;
    int t ;
    cin >> t  ;
    while(t--){
     mp.clear();
     string s ;
     cin >> s ;
     for(int i = 0 ; s[i] != '\0' ; ++i){
        if (s[i] == 'A'|| s[i] == 'G'|| s[i] == 'I'|| s[i] == 'T'|| s[i] == 'M'|| s[i] == 'R')
        mp[s[i]]++;
        else continue ;
     }
         if (mp['A'] != 0 && mp['G'] != 0 && mp['I'] != 0 && mp['T'] != 0 && mp['M'] != 0 && mp['R'] != 0){
            int var  = mp['A'] / 3 ;
            int var2 = mp['R'] / 2 ;
            int min_vars = min(var , var2);
            if (var == 0 || var2 == 0)
                {cout << 0 << endl ; continue ;}
            int say = min(min(min(min(min_vars , mp['I']) , mp['T']) , mp['M'] ) ,mp['G']);
            /*if (say == var)
                {cout << say << endl ;continue;}
            if (say < var)
                {cout << min(min(say , var),var2) << endl ; continue;}
            if (say > var)
                {cout << min(say , var) << endl ; continue;}
            cout << "0" << endl ;
            */
            cout << say << endl;
            continue;
         }
         else{cout << 0 << endl;continue;}
    }

}
