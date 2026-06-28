#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i = 0; i < m; i++)
        {
            cin >> b[i];
            mp[b[i]]++;
        }
        for(map<int, int>:: iterator it = mp.begin(); it != mp.end(); it++)
            cout << (*it).first << " ";
        cout << "\n";
        for(map<int, int>:: iterator it = mp.begin(); it != mp.end(); it++)
            if((*it).second == 2)
                cout << (*it).first << " ";
        cout << "\n";
    }


    return 0;
}
