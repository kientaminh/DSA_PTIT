#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> adj[1001];
        int n, m;
        cin >> n >> m;
        for(int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for(int j = 0; j < adj[i].size(); j++)
                cout << adj[i][j] << " ";
            cout << "\n";
        }
        cout << "\n";

    }


    return 0;
}
