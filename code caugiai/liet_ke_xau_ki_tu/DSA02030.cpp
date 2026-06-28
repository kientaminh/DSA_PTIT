#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char c;
    int k;
    cin >> c >> k;
    int vt[11], n = 0;
    char a[11];
    for(char x = 'A'; x <= c; x++)
    {
        a[n] = x;
        vt[n] = 0;
        n++;
    }
    while(1)
    {
        bool ok = 0;
        for(int i = 0; i < k; i++)
            cout << a[vt[i]];
        cout << "\n";
        for(int i = k - 1; i >= 0; i--)
        {
            if(vt[i] != n - 1)
            {
                vt[i]++;
                ok = 1;
                for(int j = i + 1; j < k; j++)
                    vt[j] = vt[i];
                break;
            }
        }
        if(!ok) break;
    }


    return 0;
}
