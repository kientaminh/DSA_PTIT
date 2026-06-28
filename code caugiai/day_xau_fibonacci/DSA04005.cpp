#include <bits/stdc++.h>

using namespace std;

// Sn = S(n - 2) + S(n - 1)

long long f[100];

long long fib(long long n)
{
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <= n; i++)
        f[i] = f[i - 2] + f[i - 1];
    return f[n];
}

char Find(long long n, long long k)
{
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k > f[n - 2]) return Find(n - 1, k - f[n - 2]);
    return Find(n - 2, k);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fib(93);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << Find(n, k) << "\n";
    }


    return 0;
}
