#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        char c[11];
        for(int i = 0; i < s.size(); i++)
            c[i] = s[i];
        do
        {
            for(int i = 0; i < s.size(); i++)
                cout << c[i];
            cout << " ";
        } while(next_permutation(c, c + s.size()));
        cout << "\n";
    }


    return 0;
}
