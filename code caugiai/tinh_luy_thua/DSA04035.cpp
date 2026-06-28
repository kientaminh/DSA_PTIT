#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long Try(long long a, long long b)
{
    if(b == 0)
        return 1;
    long long tich = Try(a, b / 2);
    if(b % 2 == 0)
        return (tich * tich) % mod;
    if(b % 2 != 0)
        return ((tich * tich) % mod * a) % mod;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a, b;
    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
            return 0;
        cout << Try(a, b) << "\n";
    }


    return 0;
}
