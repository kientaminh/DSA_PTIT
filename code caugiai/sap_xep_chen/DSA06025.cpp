#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Buoc 0: " << a[0] << "\n";
    for(int i = 1; i < n; i++)
    {
        cout << "Buoc " << i << ": ";
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        for(int k = 0; k <= i; k++)
            cout << a[k] << " ";
        cout << "\n";
    }
    return 0;
}
