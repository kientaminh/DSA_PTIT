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
        char c[20];
        int vt[20]; //mang vi tri
        for(int i = 0; i < n; i++)
        {
            c[i] = 'A' + i;
            vt[i] = i;
        }

        while(1)
        {
            for(int i = 0; i < k; i++)
                cout << c[vt[i]];
            cout << "\n";
            bool ok = 0;
            for(int i = k - 1; i >= 0; i--)
            {
                if(vt[i] != n - k + i)
                {
                    ok = 1;
                    vt[i]++;
                    for(int j = i + 1; j < k; j++)
                        vt[j] = vt[j - 1] + 1;
                    break;
                }
            }
            if(!ok) break;
        }
    }


    return 0;
}
