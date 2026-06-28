#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, q, a[100002], d[100002];
    cin >> n >> q;
    memset(d, 0, sizeof(d));
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] > 0) d[i] = d[i - 1] + a[i];
        else d[i] = d[i - 1];
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        cout << d[r] - d[l - 1] << "\n";
    }


    return 0;
}
