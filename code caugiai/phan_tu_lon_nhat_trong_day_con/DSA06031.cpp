#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        multiset<int> ms;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < k; i++)
            ms.insert(a[i]);
        cout << *ms.rbegin() << " ";
        for(int i = k; i < n; i++)
        {
            multiset<int>:: iterator it = ms.find(a[i - k]);
            ms.erase(it);
            ms.insert(a[i]);
            cout << *ms.rbegin() << " ";
        }
        cout << "\n";
    }


    return 0;
}
