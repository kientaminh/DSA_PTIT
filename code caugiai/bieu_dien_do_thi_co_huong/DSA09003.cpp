#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> adj[n + 1];
        for(int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        for(int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for(int j = 0; j < adj[i].size(); j++)
                cout << adj[i][j] << " ";
            cout << "\n";
        }
    }


    return 0;
}
