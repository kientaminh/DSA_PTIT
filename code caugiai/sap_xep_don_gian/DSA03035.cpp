#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n], l[n] = {0}, mx = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        l[a[i]] = l[a[i] - 1] + 1;
        mx = max(mx, l[a[i]]);
    }
    cout << n - mx;


    return 0;
}
