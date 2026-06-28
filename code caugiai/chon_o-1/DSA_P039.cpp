#include <bits/stdc++.h>

using namespace std;

int dp[21][1 << 21], n, a[21][21];

int Try(int i, int pre)
{
    if(i > n) return 0;
    if(dp[i][pre] != -1)
    {
        return dp[i][pre];
    }
    int ma = 0;
    int Row = 1 << (n - 1);
    for(int j = 0; j < n; j++)
    {
        if((pre & Row) == 0) //kt trang thai
        {
            int cur = pre | Row; //cap nhap trang that hien tai
            ma = max(ma, a[i][j] + Try(i + 1, cur));

        }
        Row = Row >> 1; //dich len 1 trang thai
    }
    dp[i][pre] = ma;
    return ma;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        memset(dp, -1, sizeof(dp));
        cout << Try(0, 0) << "\n";
    }

    return 0;
}
