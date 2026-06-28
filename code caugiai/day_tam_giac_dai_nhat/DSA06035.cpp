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
        int a[n], tang[n], giam[n], ans = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            tang[i] = 1;
            giam[i] = 1;
        }
        for(int i = 1; i < n; i++)
            if(a[i] > a[i - 1])
                tang[i] = tang[i - 1] + 1;
        for(int i = n - 2; i >= 0; i--)
            if(a[i] > a[i + 1])
                giam[i] = giam[i + 1] + 1;
        for(int i = 0; i < n; i++)
            ans = max(ans, tang[i] + giam[i] - 1);
        cout << ans << "\n";

    }

    return 0;
}
