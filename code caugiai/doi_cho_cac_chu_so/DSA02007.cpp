#include <bits/stdc++.h>

using namespace std;

string s, ans;

void Try(int i, int k)
{
    if(k == 0 || i == s.size() - 1) return;
    int mx = max_element(s.begin() + i, s.end()) - s.begin();
    if(s[mx] == s[i]) Try(i + 1, k);
    for(int j = i + 1; j < s.size(); j++)
    {
        if(s[j] == s[mx])
        {
            swap(s[j], s[i]);
            if(ans < s) ans = s;
            if(i < s.size() - 1) Try(i + 1, k - 1);
            swap(s[j], s[i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k >> s;
        ans = s;
        Try(0, k);
        cout << ans << "\n";
    }


    return 0;
}
