#include <bits/stdc++.h>

using namespace std;

struct dis
{
    int x, y, step;
};

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        queue<dis> q;
        int mn = -1;
        q.push({1, 1, 0});
        while(!q.empty())
        {
            dis tmp = q.front();
            q.pop();
            if(tmp.x == n && tmp.y == m)
            {
                mn = tmp.step;
                break;
            }
            if(a[tmp.x][tmp.y] == 0)
                continue;
            int X = tmp.x + a[tmp.x][tmp.y];
            int Y = tmp.y + a[tmp.x][tmp.y];
            if(X <= n)
                q.push({X, tmp.y, tmp.step + 1});
            if(Y <= m)
                q.push({tmp.x, Y, tmp.step + 1});
            a[tmp.x][tmp.y] = 0;
        }
        cout << mn << "\n";
    }


    return 0;
}
