#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int mn = 1e9;
        for(int i = 1; i < n; i++)
            mn = min(mn, a[i] - a[i - 1]);
        cout << mn << "\n";
    }


    return 0;
}
