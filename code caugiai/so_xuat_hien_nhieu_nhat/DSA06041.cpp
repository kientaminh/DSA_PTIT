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
        int a[n];
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        bool ok = 0;
        for(map<int, int>:: iterator it = m.begin(); it != m.end(); it++)
        {
            if((*it).second > n / 2)
            {
                cout << (*it).first << "\n";
                ok = 1;
            }

        }
        if(!ok) cout << "NO\n";
    }


    return 0;
}
