#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    if(s[0] != 'H' || s[s.size() - 1] != 'A')
        return 0;
    for(int i = 0; i < s.size() - 1; i++)
        if(s[i] == 'H' && s[i + 1] == 'H')
            return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s = "";
        for(int i = 0; i < n; i++)
            s += 'A';
        while(1)
        {
            if(check(s))
                cout << s << "\n";
            bool ok = 0;
            for(int i = n - 1; i >= 0; i--)
            {
                if(s[i] == 'A')
                {
                    s[i] = 'H';
                    ok = 1;
                    for(int j = i + 1; j < n; j++)
                        s[j] = 'A';
                    break;
                }
            }
            if(!ok) break;
        }
    }


    return 0;
}
