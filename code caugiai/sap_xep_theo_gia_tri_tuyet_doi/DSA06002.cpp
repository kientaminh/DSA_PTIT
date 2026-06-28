#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n + 1];
        vector<pair<int, int>> vt(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            vt[i].first = abs(x - a[i]);
            vt[i].second = i;
        }
        sort(vt.begin(), vt.end());
        for(int i = 0; i < n; i++)
            cout << a[vt[i].second] << " ";
        cout << "\n";
    }


    return 0;
}
