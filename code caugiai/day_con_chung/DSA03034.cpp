#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        long long a[n], b[m], c[k];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < m; i++)
            cin >> b[i];
        for(int i = 0; i < k; i++)
            cin >> c[i];
        int i = 0, j = 0, h = 0;
        vector<long long> ans;
        while(i < n && j < m && h < k)
        {
            if(a[i] == b[j] && b[j] == c[h])
            {
                ans.push_back(a[i]);
                i++;
                j++;
                h++;
            }
            else if(a[i] < b[j])
            {
                i++;
            }
            else if(c[h] < b[j])
            {
                h++;
            }
            else
            {
                j++;
            }
        }
        if(!ans.size())
            cout << "NO\n";
        else
        {
            for(int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";
            cout << "\n";
        }

    }


    return 0;
}
