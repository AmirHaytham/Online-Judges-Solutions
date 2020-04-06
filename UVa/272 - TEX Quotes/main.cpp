#include <bits/stdc++.h>
#define all(v) v.begin() , v.end()
using namespace std;

char s[10001] ;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);


    while(gets(s)){
        bool seen = 0 ;
        for(int i = 0 ; s[i] ; ++i){
        if (s[i]=='"'&& seen == 0){
            seen = 1 ;
            //size_t tmp = s.find('"') ;
            cout << "``" ;

            //s[i] = '`' , s[i+1] = '`';//s.insert(s.begin()+tmp , '\`') ;
            }
        else if (s[i]=='"' && seen == 1){
            seen = 0 ;
            cout << "''" ;
            //size_t tmp = s.find('"') ;
            //s[i] = '\'' , s[i+1] = '\'';//s.insert(s.begin()+tmp , '\'') ;
            }
        else cout << s[i] ;
        }

        cout << endl ;
    }


}
