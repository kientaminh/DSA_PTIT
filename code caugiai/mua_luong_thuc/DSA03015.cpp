#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        double n, s, m;
        cin >> n >> s >> m;
        if(s * m > (s - s / 7) * n)
            cout << "-1\n";
        else cout << ceil(s * m / n) << "\n";
    }


    return 0;
}
