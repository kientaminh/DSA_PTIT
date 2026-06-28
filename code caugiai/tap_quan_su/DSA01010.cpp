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
        int a[k + 1];
        map<int, int> m;
        for(int i = 1; i <= k; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        bool ok = 0;
        for(int i = k; i >= 1; i--)
        {
            if(a[i] != n - k + i)
            {
                a[i]++;
                ok = 1;
                for(int j = i + 1; j <= k; j++)
                    a[j] = a[j - 1] + 1;
                break;
            }
        }
        if(!ok) cout << k << "\n";
        else
        {
            int d = 0;
            for(int i = 1; i <= k; i++)
                if(m[a[i]] == 0)
                    d++;
            cout << d << "\n";
        }
    }


    return 0;
}
