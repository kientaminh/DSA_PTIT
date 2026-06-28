#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, d = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = n - 1; i >= 0; i--)
    {
        bool ok = 0;
        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                ok = 1;
            }
        }
        if(!ok)
            break;
        cout << "Buoc " << ++d << ": ";
        for(int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << "\n";
    }


    return 0;
}
