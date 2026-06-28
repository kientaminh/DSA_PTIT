#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, d = 0;
        cin >> n;
        int a[n];
        map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        sort(a, a + n);
        for(int i = a[0] + 1; i < a[n - 1]; i++)
            if(!m[i])
                d++;
        cout << d << "\n";
    }


    return 0;
}
