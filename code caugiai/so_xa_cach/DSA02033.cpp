#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n)
{
    for(int i = 2; i <= n; i++)
        if(abs(a[i] - a[i - 1]) == 1)
            return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[11];
        for(int i = 1; i <= n; i++)
            a[i] = i;
        while(next_permutation(a + 1, a + n + 1))
        {
            if(check(a, n))
            {
                for(int i = 1; i <= n; i++)
                    cout << a[i];
                cout << "\n";
            }
        }
    }


    return 0;
}
