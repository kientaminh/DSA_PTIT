#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, d = 0, x1 = 0, x2 = 0;
        cin >> n;
        int a[n];
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        {
            d++;
            if(d == 1) x1 = (*it);
            if(d == 2) x2 = (*it);
        }
        if(d < 2) cout << "-1\n";
        else cout << x1 << " " << x2 << "\n";
    }


    return 0;
}
