#include <bits/stdc++.h>

using namespace std;

bool check(string s, int k)
{
    s = 'B' + s + 'B';
    for(int i = 0; i < s.size() - k - 1; i++)
    {
        if(s[i] == 'B' && s[i + k + 1] == 'B')
        {
            int cnt = 0;
            for(int j = i + 1; j < i + k + 1; j++)
            {
                if(s[j] == 'A')
                    cnt++;
            }
            if(cnt == k) return 1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k;
    cin >> n >> k;
    string s;
    for(int i = 0; i < n; i++)
        s += 'A';
    vector<string> ans;
    while(1)
    {
        bool kt = 0;
        if(check(s, k))
            ans.push_back(s);
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == 'A')
            {
                s[i] = 'B';
                kt = 1;
                for(int j = i + 1; j < n; j++)
                    s[j] = 'A';
                break;
            }
        }
        if(kt == 0) break;
    }
    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";
    return 0;
}
