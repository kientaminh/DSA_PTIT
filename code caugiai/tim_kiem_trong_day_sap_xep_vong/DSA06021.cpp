#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, k, vt;
        cin >> n >> x;
        for(int i = 1; i <= n; i++)
        {
            cin >> k;
            if(x == k)
                vt = i;
        }
        cout << vt << "\n";
    }


    return 0;
}
