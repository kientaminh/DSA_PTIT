#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1], f[n + 1], mx = 0;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        f[i] = 1;
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
        }
        mx = max(mx, f[i]);
    }
    cout << mx;

    return 0;
}
