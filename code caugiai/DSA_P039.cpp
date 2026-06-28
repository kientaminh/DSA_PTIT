#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[50][50], s1 = 0, s2 = 0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int mx = 0;
            for(int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if(mx < a[i][j])
                    mx = a[i][j];
            }
            s1 += mx;
        }
        for(int i = 0; i < n; i++)
        {
            int mx = 0;
            for(int j = 0; j < n; j++)
            {
                if(mx < a[j][i])
                    mx = a[i][j];
            }
            s2 += mx;
        }
        if(s1 < s2) cout << s2 << "\n";
        else cout << s1 << "\n";

    }
    return 0;
}
