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
        sort(a, a + n, greater<int>());
        for(int i = 0; i < k; i++)
            cout << a[i] << " ";
        cout << "\n";
    }


    return 0;
}
