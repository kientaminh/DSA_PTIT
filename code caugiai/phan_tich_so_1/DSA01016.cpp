#include <bits/stdc++.h>

using namespace std;

int x[11], n;

void Try(int i, int pre, int sum)
{
    for(int j = pre; j >= 1; j--)
    {
        if(sum + j <= n)
        {
            x[i] = j;
            if(sum + j == n)
            {
                cout << "(";
                for(int k = 1; k < i; k++)
                    cout << x[k] << " ";
                cout << x[i] << ") ";
            }
            else Try(i + 1, j, sum + j);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        Try(1, n, 0);
        cout << "\n";
    }


    return 0;
}
