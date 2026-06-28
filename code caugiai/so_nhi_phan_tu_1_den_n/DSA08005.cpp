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
        queue<string> q;
        q.push("1");
        for(int i = 1; i <= n; i++)
        {
            string s = q.front();
            q.pop();
            cout << s << " ";
            q.push(s + "0");
            q.push(s + "1");

        }
        cout << "\n";
    }


    return 0;
}
