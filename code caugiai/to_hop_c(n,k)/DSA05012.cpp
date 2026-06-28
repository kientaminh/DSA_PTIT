#include <bits/stdc++.h>

#define ll long long

using namespace std;

// k == 0 || k == n -> C(n, k) = 1
// C(n, k) = C(n - 1, k - 1) + C(n - 1, k)

ll mod = 1e9 + 7;

ll c[1001][1001];

void C()
{
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i)
                c[i][j] = 1;
            else c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    C();
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << c[n][k] << "\n";
    }


    return 0;
}
