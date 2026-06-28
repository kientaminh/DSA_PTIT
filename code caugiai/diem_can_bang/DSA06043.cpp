#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], l[n], r[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        l[0] = a[0], r[n - 1] = a[n - 1];
        for(int i = 1; i < n; i++)
            l[i] = l[i - 1] + a[i];
        for(int i = n - 2; i >= 0; i--)
            r[i] = r[i + 1] + a[i];
        bool ok = 0;
        for(int i = 0; i < n; i++)
        {
            if(l[i] == r[i])
            {
                ok = 1;
                cout << i + 1 << "\n";
                break;
            }
        }
        if(!ok) cout << "-1\n";
    }


    return 0;
}
