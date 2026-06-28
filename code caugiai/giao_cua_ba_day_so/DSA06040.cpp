#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        long long a[n1], b[n2], c[n3];
        bool ok = 0;
        for(int i = 0; i < n1; i++)
            cin >> a[i];
        for(int i = 0; i < n2; i++)
            cin >> b[i];
        for(int i = 0; i < n3; i++)
            cin >> c[i];
        for(int i = 0, j = 0, k = 0; i < n1, j < n2, k < n3;)
        {
            if(a[i] == b[j] && b[j] == c[k])
            {
                cout << a[i] << " ";
                i++;
                j++;
                k++;
                ok = 1;
            }
            else
            {
                long long mn = min(a[i], min(b[j], c[k]));
                if(mn == a[i]) i++;
                else if(mn == b[j]) j++;
                else k++;
            }
        }
        if(!ok) cout << "-1";
        cout << "\n";
    }


    return 0;
}
