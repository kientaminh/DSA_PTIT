#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long s = 0;
        for(long long i = 0; i < n; i++)
            s = (s + (a[i] * i)) % mod;
        cout << s << "\n";
    }


    return 0;
}
