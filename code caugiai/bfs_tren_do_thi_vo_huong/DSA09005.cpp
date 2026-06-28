#include <bits/stdc++.h>

using namespace std;

int vis[1003];
vector<int> adj[1001];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while(q.size())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int i = 0; i < adj[v].size(); i++)
        {
            if(vis[adj[v][i]] != 1)
            {
                q.push(adj[v][i]);
                vis[adj[v][i]] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, s;
        cin >> n >> m >> s;

        for(int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs(s);
        cout << "\n";
        for(int i = 1; i <= n; i++)
        {
            adj[i].clear();
            vis[i] = 0;
        }
    }


    return 0;
}
