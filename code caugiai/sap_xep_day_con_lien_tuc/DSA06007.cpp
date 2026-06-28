#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int l = 0, r = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
            {
                l = i + 1;
                break;
            }
        }
        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] != b[i])
            {
                r = i + 1;
                break;
            }
        }
        cout << l << " " << r << "\n";
    }


    return 0;
}
