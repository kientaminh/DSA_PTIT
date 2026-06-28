#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<string, int> m;
    int n, k;
    cin >> n >> k;
    string a[n + 1];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    vector<string> ar;
    for(map<string, int>::iterator it = m.begin(); it != m.end(); it++)
        ar.push_back((*it).first);
    int vt[n + 1]; //mang vi tri
    for(int i = 1; i <= k; i++)
        vt[i] = i;
    while(1)
    {
        for(int i = 1; i <= k; i++)
            cout << ar[vt[i] - 1] << " ";
        cout << "\n";
        bool ok = 0;
        for(int i = k; i >= 1; i--)
        {
            if(vt[i] != m.size() - k + i)
            {
                vt[i]++;
                ok = 1;
                for(int j = i + 1; j <= k; j++)
                    vt[j] = vt[j - 1] + 1;
                break;
            }
        }
        if(!ok) break;
    }


    return 0;
}
