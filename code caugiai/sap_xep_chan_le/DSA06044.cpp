#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n], sz1 = 0, sz2 = 0;
    vector<int> b, c;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(i % 2 == 0)
            b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    sort(c.begin(), c.end(), greater<int>());

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            cout << b[sz1++] << " ";
        else cout << c[sz2++] << " ";
    }


    return 0;
}
