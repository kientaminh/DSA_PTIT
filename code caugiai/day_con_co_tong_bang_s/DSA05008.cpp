#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, s;
    cin >> t;
    while(t--)
    {
        int a[201];
        cin >> n >> s;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int dp[s + 1] = {};
        dp[0] = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = s; j >= a[i]; j--)
            {
                if(dp[j] == 0 && dp[j - a[i]] == 1)
                    dp[j] = 1;
            }
        }
        if(dp[s] == 1) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}
