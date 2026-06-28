#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, x;
        cin >> n >> x;
        long long a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        long long ans = upper_bound(a, a + n, x) - a;
        if(ans == 0)
            cout << "-1\n";
        else cout << ans << "\n";
    }


    return 0;
}
