#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<string , int>mp;
    int elmrat = 0 ;
    int t ; cin >> t ;
    int l , nfreq ;
    string s;
    string tmp = "";
    deque<int> dq ;
    vector<int> nn;
    while(t--){
        cin >> l >> nfreq ;
        s = "" ;
        tmp = "";
        elmrat++;
        mp.clear();
        nn.clear();
        dq.clear();
        for(int i = 1 ; i <= l ; ++i){
            getline(cin,s,'\'');
            size_t pos ;
            if(s.find("liked ")!=-1){
               pos = s.find("liked ");
               tmp = s.substr(pos+6);
               mp[tmp]++;
               continue;
            }
            else if(s.find("commented on ")!=-1){
               pos = s.find("commented on ");
               tmp = s.substr(pos+13);
               mp[tmp]++;
               continue;
            }
        }
        map<string , int>::iterator it = mp.begin();
        for(it ; it != mp.end() ;  ++it){
            nn.push_back(it->second);
        }
        sort(nn.begin() , nn.end() , greater<int>());
        for(int i = 0 ; i < nn.size() ; ++i){
            dq.push_back(nn[i]);
        }
        cout << "Case " << elmrat << ":\n";

        while(nfreq){
            map<string , int>::iterator it = mp.begin();
            for(it ; it!=mp.end() ;++it){
                if (it->second == dq.front())
                {
                    cout << it->first << endl ;
                    dq.pop_front();
                    nfreq--;
                    break;
                }
            }
        }
    }
}
