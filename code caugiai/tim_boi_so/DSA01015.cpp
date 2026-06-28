#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        queue<long long> q;
        q.push(9);
        while(q.front() % n)
        {
            long long k = q.front();
            q.pop();
            q.push(k * 10);
            q.push(k * 10 + 9);
        }
        cout << q.front() << "\n";
    }


    return 0;
}
