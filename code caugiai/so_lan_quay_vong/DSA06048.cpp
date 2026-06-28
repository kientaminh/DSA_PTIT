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
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        bool kt = 1;
        for(int i = 1; i < n; i++)
        {
            if(a[i] < a[i - 1])
            {
                cout << i << "\n";
                kt = 0;
                break;
            }
        }
        if(kt) cout << "0\n";
    }


    return 0;
}
