//DSA03024 - DSA03025

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first >> a[i].second;
        }
        sort(a, a + n, cmp);
        int cnt = 0, tmp = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i].first >= tmp)
            {
                tmp = a[i].second;
                cnt++;
            }
        }
        cout << cnt << "\n";

    }


    return 0;
}
