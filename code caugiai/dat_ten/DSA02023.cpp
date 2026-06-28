#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, k;
    cin >> n >> k;
    string a[n];
    map<string, int> m;
    vector<string> ans;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    for(map<string, int>:: iterator it = m.begin(); it != m.end(); it++)
        ans.push_back((*it).first);
    int vt[k + 1];
    for(int i = 0; i < k; i++)
        vt[i] = i;
    while(1)
    {
        for(int i = 0; i < k; i++)
            cout << ans[vt[i]] << " ";
        cout << "\n";
        bool ok = 0;
        for(int i = k - 1; i >= 0; i--)
        {
            if(vt[i] != m.size() - k + i)
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
