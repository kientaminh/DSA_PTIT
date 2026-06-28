#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    queue<string> q;
    q.push("8");
    while(!q.empty())
    {
        string s = q.front();
        q.pop();
        int k = s.size();
        if(k == n)
        {
            if(s[n - 1] == '6')
                cout << s << "\n";
            continue;
        }
        if(s[k - 1] == '8')
            q.push(s + "6");
        else
        {
            if(k < 4)
                q.push(s + "6");
            else if(s[k - 2] == '8' || s[k - 3] == '8')
                q.push(s + "6");
            q.push(s + "8");
        }
    }


    return 0;
}
