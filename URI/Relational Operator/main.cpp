#include <iostream>

using namespace std;

int main()
{
    int n;
    int n1 , n2;
    cin >> n;
    int complete = 0;
    do{
        cin >> n1 >> n2;
        if (n1 > n2) {cout << ">" << endl;++complete;}
        else if (n1 < n2) {cout << "<" << endl;++complete;}
        else cout << "=" << endl;++complete;

    }
    while (complete < n);

    return 0;
}
