#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

 set<char> mp;
 int n;
 string line;
while(cin >> n && n!=0)
{
    getline(cin ,line);
    for(int i = 0 ; i < line.size() ; ++i){
     if(line[i]>='a' && line[i]<='z')
     mp.insert(line[i]);
     else;
    }
    cout << mp.size() << m.equal;
}



}
