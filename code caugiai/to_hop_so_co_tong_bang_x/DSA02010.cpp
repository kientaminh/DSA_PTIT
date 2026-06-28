#include <bits/stdc++.h>

using namespace std;

int k[101], a[21], x, n, kt;

void print(int m)
{
    cout << "[";
    for(int i = 0; i < m; i++)
        cout << k[i] << " ";
    cout << k[m] << "]";
}

void Try(int i, int pre, int sum)
{
    for(int j = pre; j < n; j++)
    {
        if(sum + a[j] <= x)
        {
            k[i] = a[j];
            if(sum + a[j] == x)
            {
                print(i);
                kt = 1;
            }
            else Try(i + 1, j, sum + a[j]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> x;
        kt = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        Try(0, 0, 0);
        if(!kt) cout << "-1";
        cout << "\n";
    }


    return 0;
}
