#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int b[], int n)
{
    for(int i = 1; i <= n; i++)
        if(a[i] != b[i])
            return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, d = 0;
        cin >> n >> k;
        int a[k + 1], b[k + 1];
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = i;
        }
        while(1)
        {
            d++;
            bool ok = 0;
            if(check(a, b, k))
            {
                cout << d << "\n";
                break;
            }
            for(int i = k; i >= 1; i--)
            {
                if(b[i] != n - k + i)
                {
                    ok = 1;
                    b[i]++;
                    for(int j = i + 1; j <= k; j++)
                        b[j] = b[j - 1] + 1;
                    break;
                }
            }
            if(!ok) break;
        }

    }


    return 0;
}
