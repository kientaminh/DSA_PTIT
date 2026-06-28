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
        int a[n];
        multiset<long long> ms;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            ms.insert(a[i]);
        }
        long long sum = 0;
        while(ms.size() > 1)
        {
            long long x = *ms.begin();
            ms.erase(ms.begin());
            long long y = *ms.begin();
            ms.erase(ms.begin());
            sum += (x + y);
            ms.insert(x + y);
        }
        cout << sum << "\n";
    }


    return 0;
}
