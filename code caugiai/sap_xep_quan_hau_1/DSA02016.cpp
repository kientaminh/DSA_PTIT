#include <bits/stdc++.h>

using namespace std;

int col[11], cheochinh[20], cheophu[20], n, cnt;

void Try(int i)
{
    for(int j = 1; j <= n; j++)
    {
        if(col[j] || cheochinh[i - j + n] || cheophu[i + j])
            continue;
        col[j] = cheochinh[i - j + n] = cheophu[i + j] = 1;
        if(i == n)
            cnt++;
        else Try(i + 1);
        col[j] = cheochinh[i - j + n] = cheophu[i + j] = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << "\n";
        memset(col, 0, sizeof(col));
        memset(cheochinh, 0, sizeof(cheochinh));
        memset(cheophu, 0, sizeof(cheophu));
    }


    return 0;
}
