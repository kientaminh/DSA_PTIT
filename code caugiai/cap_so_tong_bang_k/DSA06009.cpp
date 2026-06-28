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
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        int s = 0;
        for(map<int, int>:: iterator it = m.begin(); it != m.end(); it++)
        {
            if((*it).first * 2 == k)
                s += (*it).second * ((*it).second - 1);
            else s += (*it).second * m[k - (*it).first];
        }
        cout << s / 2 << "\n";
    }


    return 0;
}
