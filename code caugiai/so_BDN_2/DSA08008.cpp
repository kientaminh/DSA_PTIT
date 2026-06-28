#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        queue<long long> q;
        q.push(1);
        while(q.front() % n != 0)
        {
            long long x = q.front();
            q.pop();
            q.push(x * 10);
            q.push(x * 10 + 1);
        }
        cout << q.front() << "\n";
    }


    return 0;
}
