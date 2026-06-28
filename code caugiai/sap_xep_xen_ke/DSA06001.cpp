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
        int a[n + 1];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for(int i = 0; i < n / 2; i++)
            cout << a[n - i - 1] << " " << a[i] << " ";
        if((n & 1)) cout << a[n / 2];
        cout << "\n";
    }


    return 0;
}
