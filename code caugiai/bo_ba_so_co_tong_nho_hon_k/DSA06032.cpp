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
        long long a[n], ans = 0;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n - 2; i++)
        {
            int l = i + 1, r = n - 1;
            while(l < r)
            {
                long long s = a[i] + a[l] + a[r];
                if(s >= k) r--;
                else
                {
                    ans += r - l;
                    l++;
                }
            }
        }
        cout << ans << "\n";
    }


    return 0;
}
