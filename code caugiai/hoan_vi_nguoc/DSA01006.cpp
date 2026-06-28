#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a = "";
        for(int i = 0; i < n; i++)
            a += char(i + 49);
        vector<string> s;
        do
        {
            s.push_back(a);
        } while(next_permutation(a.begin(), a.end()));
        for(int i = s.size() - 1; i >= 0; i--)
            cout << s[i] << " ";
        cout << "\n";
    }


    return 0;
}
