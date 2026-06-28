#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    map<int, int> m;
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
        if(m[x] == 1)
            cout << x << " ";
    }

    return 0;
}
