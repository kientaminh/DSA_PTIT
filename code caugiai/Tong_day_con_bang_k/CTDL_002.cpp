#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a[100], n, k, x[100], d = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        x[i] = 0;
    }
    while(1)
    {
        bool kt = 0;
        int i = n - 1, s = 0;
        for(; i >= 0; i--)
        {
            if(x[i] == 0)
            {
                x[i] = 1;
                kt = 1;
                break;
            }
        }
        if(kt == 0) break;
        for(int j = i + 1; j < n; j++)
            x[j] = 0;
        for(int k = 0; k < n; k++)
        {
            s += a[k] * x[k];
        }
        if(s == k)
        {
            d++;
            for(int k = 0; k < n; k++)
                if(x[k] == 1)
                    cout << a[k] << " ";
            cout << "\n";
        }
    }
    cout << d;

    return 0;
}
