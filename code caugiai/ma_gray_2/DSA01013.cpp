#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string n;
        cin >> n;
        for(int i = 1; i < n.size(); i++)
        {
            n[i] = ((n[i - 1] - '0') ^ (n[i] - '0')) + '0';
        }
        cout << n << "\n";
    }


    return 0;
}
