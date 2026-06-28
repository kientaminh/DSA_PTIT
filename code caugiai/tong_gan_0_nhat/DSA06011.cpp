#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, s = 2e6;
        cin >> n;
        int a[n + 1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(abs(a[i] + a[j]) < abs(s))
                    s = a[i] + a[j];
            }
        }
        cout << s << "\n";
    }


    return 0;
}
