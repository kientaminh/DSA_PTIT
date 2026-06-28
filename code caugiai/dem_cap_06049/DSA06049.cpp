#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        long long d = 0;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n; i++)
        {
            int p = lower_bound(a + i + 1, a + n, a[i] + k) - a;
            d += p - i - 1;
//            cout << p << "\n";
        }
        cout << d << "\n";
    }


    return 0;
}
