#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.second > b.second)
        return 1;
    else if(a.second == b.second && a.first < b.first)
        return 1;
    return 0;
}

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
        vector<pair<int, int>> ans(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for(int i = 0; i < n; i++)
            ans.push_back(make_pair(a[i], m[a[i]]));
        sort(ans.begin(), ans.end(), cmp);
        for(int i = 0; i < n; i++)
            cout << ans[i].first << " ";
        cout << "\n";

    }


    return 0;
}
