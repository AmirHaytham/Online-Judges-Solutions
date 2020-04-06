#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int nop , nskill;
    int counter = 0;
    cin >> nop >> nskill;
    vector<int> prob(nop);
    for (int i = 0 ; i < nop ; ++i)
    {
        cin >> prob[i];
    }
    while(!prob.empty() && prob.back() <= nskill )
    {
        ++counter;
        prob.pop_back();
    }
    reverse(prob.begin(), prob.end());

        while(!prob.empty() && prob.back() <= nskill )
    {
        ++counter;
        prob.pop_back();
    }
    cout << counter;

}
