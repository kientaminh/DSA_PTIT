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
        int a[16];
        for(int i = 1; i <= k; i++)
            a[i] = i;
        while(1)
        {
            bool ok = 0;
            for(int i = 1; i <= k; i++)
                cout << a[i];
            cout << " ";
            for(int i = k; i >= 1; i--)
            {
                if(a[i] != n - k + i)
                {
                    ok = 1;
                    a[i]++;
                    for(int j = i + 1; j <= k; j++)
                        a[j] = a[j - 1] + 1;
                    break;
                }
            }
            if(!ok) break;
        }
        cout << "\n";
    }


    return 0;
}
