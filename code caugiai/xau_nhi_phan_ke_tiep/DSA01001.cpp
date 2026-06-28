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
        bool kt = 0;
        int i = s.size() - 1;
        for(; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                s[i] = '1';
                kt = 1;
                break;
            }
        }
        if(kt == 0)
        {
            for(int j = 0; j < s.size(); j++)
                s[j] = '0';
        }
        for(int j = i + 1; j < s.size(); j++)
            if(s[j] == '1')
                s[j] = '0';
        cout << s << "\n";
    }


    return 0;
}
