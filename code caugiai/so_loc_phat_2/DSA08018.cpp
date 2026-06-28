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
        vector<string> ans;
        queue<string> q;
        q.push("6");
        q.push("8");
        ans.push_back("6");
        ans.push_back("8");
        while(q.front().size() < n)
        {
            string s = q.front();
            q.pop();
            q.push(s + "6");
            q.push(s + "8");
            ans.push_back(s + "6");
            ans.push_back(s + "8");
        }
        cout << ans.size() << "\n";
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }


    return 0;
}
