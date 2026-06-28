#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, x;
        cin >> n >> m;
        vector<int> a;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0; i < m; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        for(int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        cout << "\n";
    }


    return 0;
}
