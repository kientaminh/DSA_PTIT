#include <bits/stdc++.h>

using namespace std;

const int x[] = {1, -1, 0, 0};
const int y[] = {0, 0, -1, 1};

int n, m, d;
char a[1001][1001];

void Try(int i, int j)
{
    a[i][j] = '.';
    for(int k = 0; k < 4; k++)
    {
        int X = i + x[k];
        int Y = j + y[k];
        if(X >= 0 && X < n && Y >= 0 && Y < m && a[X][Y] == '#')
            Try(X, Y);
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '#')
            {
                d++;
                Try(i, j);
            }
        }
    }
    cout << d;
    return 0;
}
