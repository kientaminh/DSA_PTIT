#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m), c;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            c.push_back(a[i]);
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            c.push_back(b[i]);
        }
        sort(c.begin(), c.end());
        cout << c[k - 1] << "\n";
    }


    return 0;
}
