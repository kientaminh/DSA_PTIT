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
        int a[n];
        for(int i = 0; i < n; i++)
            a[i] = pow(2, i);
        for(int i = n - 1; i >= 0; i--)
        {
            if(k == a[i])
                cout << char('A' + i) << "\n";
            else if(k > a[i])
                k -= a[i];
        }
    }

    return 0;
}
