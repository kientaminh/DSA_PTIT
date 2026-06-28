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
        int a[n + 1], b[n + 1];
        cout << "[";
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(i == n - 1)
                cout << a[i];
            else
                cout << a[i] << " ";
        }
        cout << "]\n";
        for(int i = 1; i < n; i++)
        {
            cout << "[";
            for(int j = 0; j < n - i; j++)
            {
                b[j] = a[j] + a[j + 1];
                if(j == n - i - 1)
                    cout << b[j];
                else
                    cout << b[j] << " ";
            }
            for(int j = 0; j < n - i; j++)
            {
                a[j] = b[j];
            }
            cout << "]\n";
        }
    }


    return 0;
}
