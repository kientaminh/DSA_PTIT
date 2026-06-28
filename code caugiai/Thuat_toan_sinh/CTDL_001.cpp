#include <bits/stdc++.h>

using namespace std;

int a[11];

bool dx(int a[], int n)
{
    for(int i = 0; i <= n / 2; i++)
        if(a[i] != a[n - i - 1])
            return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
    while(1)
    {
        bool kt = 0;
        int i = n - 1;
        for(; i >= 0; i--)
        {
            if(a[i] == 0)
            {
                a[i] = 1;
                kt = 1;
                break;
            }
        }
        if(kt == 0) break;
        for(int j = i + 1; j < n; j++)
            a[j] = 0;
        if(dx(a, n))
        {
            for(int k = 0; k < n; k++)
                cout << a[k] << " ";
            cout << "\n";
        }
    }
    return 0;
}
