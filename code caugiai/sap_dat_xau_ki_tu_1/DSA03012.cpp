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
        map<char, int> m;
        int mx = 0;
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        for(map<char, int>::iterator it = m.begin(); it != m.end(); it++)
            mx = max(mx, (*it).second);
        if(!(s.size() & 1))
        {
            if(mx > s.size() / 2)
                cout << "-1\n";
            else cout << "1\n";
        }
        else
        {
            if(mx > s.size() / 2 + 1)
                cout << "-1\n";
            else cout << "1\n";
        }
    }



    return 0;
}
