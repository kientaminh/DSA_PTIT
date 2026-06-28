#include <bits/stdc++.h>

using namespace std;

//2^(n - 1)

const long long mod = 123456789;

long long tinh(long long n, long long k)
{
    if(k == 0)
        return 1;
    long long res = tinh(n, k / 2);
    if(k % 2 == 0)
        return (res * res) % mod;
    else
        return ((res * res) % mod * n) % mod;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << tinh(2, n - 1) << "\n";
    }


    return 0;
}
