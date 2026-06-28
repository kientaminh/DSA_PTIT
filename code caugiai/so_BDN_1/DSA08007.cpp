#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n, d = 0;
        cin >> n;
        queue<long long> q;
        q.push(1);
        while(q.front() <= n)
        {
            d++;
            long long x = q.front();
            q.pop();
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
        cout << d << "\n";
    }


    return 0;
}
