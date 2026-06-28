#include <bits/stdc++.h>

using namespace std;

//123^321
//a ^ b = (a ^ 2) ^ (b / 2) chan

const long long mod = 1e9 + 7;

long long dao(long long n)
{
    long long m = 0;
    while(n > 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

long long tinh(long long n, long long k)
{
    if(k == 1) return n % mod;
    long long x = tinh(n, k/2);
    x = (x * x) % mod;
    if(k % 2) return (x * n) % mod;
    return x;
}
//
//long long tinh(long long n, long long k)
//{
//    long long res = 1;
//    n %= mod;
//    while (k > 0)
//    {
//        if (k % 2 == 1)
//            res = (res * n) % mod;
//        n = (n * n) % mod;
//        k /= 2;
//    }
//    return res;
//}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, m;
        cin >> n;
        m = dao(n);
        cout << tinh(n, m) << "\n";
    }


    return 0;
}
