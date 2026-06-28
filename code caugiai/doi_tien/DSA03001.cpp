#include <bits/stdc++.h>

using namespace std;

int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        int i = 9;
        while(n > 0)
        {
            if(n >= a[i])
            {
                cnt += (n / a[i]);
                n %= a[i];
            }
            i--;
        }
        cout << cnt << "\n";
    }


    return 0;
}
