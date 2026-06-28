#include <bits/stdc++.h>

using namespace std;

int adj[1001][1001];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, x;
    cin >> n;
    string s;
    cin.ignore();
    for(int i = 1; i <= n; i++)
    {
        getline(cin, s);
        stringstream ss(s);
        while(ss >> x)
        {
            adj[i][x] = 1;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
