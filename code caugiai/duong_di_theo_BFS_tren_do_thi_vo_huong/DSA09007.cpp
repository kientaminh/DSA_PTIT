#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1001;

bool visit[MAXN]; //danh dau dinh
vector<int> adj[MAXN]; //do thi
int p[MAXN]; //duong di

void bfs(int s)
{
    queue <int> q;
    q.push(s);
    visit[s] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            if(!visit[adj[u][i]])
            {
                visit[adj[u][i]] = 1;
                q.push(adj[u][i]);
                p[adj[u][i]] = u;
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
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        for(int i = 0; i < m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s);
        if(!visit[t])
            cout << "-1\n";
        else
        {
            vector<int> ans;
            for(int i = t; i > 0; i = p[i])
            {
                ans.push_back(i);
            }
            reverse(ans.begin(), ans.end());
            for(int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << "\n";
        }
        for(int i = 1; i <= n; i++)
        {
            adj[i].clear();
            visit[i] = 0;
            p[i] = 0;
        }
    }


    return 0;
}
