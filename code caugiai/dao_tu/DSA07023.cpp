#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> ans;
        while(ss >> s)
        {
            ans.push_back(s);
        }
        for(int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << " ";
        cout << "\n";
    }


    return 0;
}
