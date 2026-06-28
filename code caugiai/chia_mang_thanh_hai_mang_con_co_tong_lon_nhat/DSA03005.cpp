#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int ans = 0;
        if(k < n - k)
        {
            for(int i = k; i < n; i++)
                ans += a[i];
            for(int i = 0; i < k; i++)
                ans -= a[i];
        }
        else
        {
            for(int i = n - k; i < n; i++)
                ans += a[i];
            for(int i = 0; i < n - k; i++)
                ans -= a[i];
        }
        cout << ans << "\n";
    }


    return 0;
}
