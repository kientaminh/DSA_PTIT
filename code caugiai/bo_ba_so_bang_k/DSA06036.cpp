#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        bool kt = 0;
        for(int i = 0; i < n - 2; i++)
        {
            int l = i + 1, r = n - 1;
            bool ok = 0;
            while(l < r)
            {
                long long x = a[i] + a[l] + a[r];
                if(x == k)
                {
                    cout << "YES\n";
                    ok = 1;
                    kt = 1;
                    break;
                }
                else if(x < k)
                    l++;
                else r--;
            }
            if(ok) break;
        }
        if(!kt)
            cout << "NO\n";
    }


    return 0;
}
