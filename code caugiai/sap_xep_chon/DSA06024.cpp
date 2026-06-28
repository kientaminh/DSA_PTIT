#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        cout << "Buoc " << i + 1 << ": ";
        int k = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[k] > a[j])
                k = j;
        }
        if(k != i) swap(a[k], a[i]);
        for(int j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << "\n";
    }


    return 0;
}
