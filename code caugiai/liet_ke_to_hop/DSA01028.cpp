#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k, sz = 0;
    cin >> n >> k;
    int a[n + 1], b[n + 1], vt[n + 1];
    map<int, int> m;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    for(map<int, int>:: iterator it = m.begin(); it != m.end(); it++)
    {
        vt[sz] = sz;
        b[sz] = (*it).first;
        sz++;
    }
    while(1)
    {
        bool ok = 0;
        for(int i = 0; i < k; i++)
            cout << b[vt[i]] << " ";
        cout << "\n";
        for(int i = k - 1; i >= 0; i--)
        {
            if(vt[i] != sz - k + i)
            {
                vt[i]++;
                ok = 1;
                for(int j = i + 1; j < k; j++)
                    vt[j] = vt[j - 1] + 1;
                break;
            }
        }
        if(!ok) break;
    }

    return 0;
}
