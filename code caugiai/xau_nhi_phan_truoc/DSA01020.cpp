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
        bool ok = 0;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                ok = 1;
                s[i] = '0';
                for(int j = i + 1; j < s.size(); j++)
                    s[j] = '1';
                break;
            }
        }
        if(!ok)
        {
            for(int i = 0; i < s.size(); i++)
                cout << "1";
            cout << "\n";
        }
        else cout << s << "\n";
    }


    return 0;
}
