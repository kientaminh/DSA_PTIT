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
        int a[n + 1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        int x = lower_bound(a, a + n, k) - a;
        if(a[x] != k)
            cout << "NO\n";
        else cout << x + 1 << "\n";
    }


    return 0;
}
