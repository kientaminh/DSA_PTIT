#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int T;
        cin >> T;
        string s;
        cin >> s;
        int i = s.size() - 2;
        while(i >= 0 && s[i] >= s[i + 1]) i--;
        if(i < 0) cout << T << " BIGGEST\n";
        else
        {
            int j = s.size() - 1;
            while(s[j] <= s[i]) j--;
            swap(s[j], s[i]);
            sort(s.begin() + i + 1, s.end());
            cout << T << " " << s << "\n";
        }
    }


    return 0;
}
