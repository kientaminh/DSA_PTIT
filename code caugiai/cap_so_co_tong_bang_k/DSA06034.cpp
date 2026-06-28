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
        map<int, long long> m;
        long long d = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for(map<int, long long>:: iterator it = m.begin(); it != m.end(); it++)
        {
            if((*it).first * 2 == k)
                d += (*it).second * ((*it).second - 1);
            else
                d += (*it).second * m[k - (*it).first];
        }
        cout << d / 2 << "\n";
    }


    return 0;
}
