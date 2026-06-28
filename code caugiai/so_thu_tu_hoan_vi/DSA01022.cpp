#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int b[], int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] != b[i])
            return 0;
    }
    return 1;

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[11], b[11];
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = i;
        }
        int d = 0;
        do {
            d++;
            if(check(a, b, n))
            {
                cout << d << "\n";
                break;
            }

        } while(next_permutation(b + 1, b + n + 1));

    }


    return 0;
}
