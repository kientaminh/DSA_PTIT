#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1], x[n + 1];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            x[i] = 0;
        }
        sort(a, a + n);
        stack<string> ans;
        while(1)
        {
            bool ok = 0;
            for(int i = n - 1; i >= 0; i--)
            {
                if(x[i] == 0)
                {
                    ok = 1;
                    x[i] = 1;
                    for(int j = i + 1; j < n; j++)
                        x[j] = 0;
                    break;
                }
            }
            if(!ok) break;
            int s = 0;
            vector<int> p;
            for(int i = 0; i < n; i++)
            {
                s = s + a[i] * x[i];
                if(x[i]) p.push_back(a[i]);
            }
            if(s == k)
            {
                string s = "[";
                for(int i = 0; i < p.size(); i++)
                {

                    if(i == p.size() - 1)
                        s += to_string(p[i]);
                    else
                        s = s + to_string(p[i]) + " ";

                }
                ans.push(s + "] ");
            }
        }
        if(ans.empty()) cout << "-1\n";
        else
        {
            while(!ans.empty())
            {
                cout << ans.top();
                ans.pop();
            }
        }
        cout << "\n";
    }

    return 0;
}
