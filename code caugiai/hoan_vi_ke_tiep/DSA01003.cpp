#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[1003];
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        if(next_permutation(a + 1, a + n + 1))
        {
            for(int i = 1; i <= n; i++)
                cout << a[i] << " ";
        }
        else
        {
            for(int i = 1; i <= n; i++)
                cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}
