#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[11];
        cin >> n;
        for(int i = 1; i <= n; i++)
            a[i] = i;
        do
        {
            for(int i = 1; i <= n; i++)
                cout << a[i];
            cout << " ";
        } while(next_permutation(a + 1, a + n + 1));
        cout << "\n";
    }


    return 0;
}
