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
        char a[11];
        for(int i = 1; i <= n; i++)
            a[i] = 'A';
        while(1)
        {
            bool kt = 0;
            for(int i = 1; i <= n; i++)
                cout << a[i];
            cout << " ";
            for(int i = n; i >= 1; i--)
            {
                if(a[i] == 'A')
                {
                    kt = 1;
                    a[i] = 'B';
                    for(int j = i + 1; j <= n; j++)
                        a[j] = 'A';
                    break;
                }
            }
            if(kt == 0) break;
        }
        cout << "\n";
    }


    return 0;
}
