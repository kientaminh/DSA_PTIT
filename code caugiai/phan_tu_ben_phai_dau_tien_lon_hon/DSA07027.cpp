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
        vector<int> a(n), b(n, -1);
        stack<int> st;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && a[i] > a[st.top()])
            {
                b[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        for(int i = 0; i < n; i++)
        {
            if(b[i] == -1)
                cout << -1 << " ";
            else cout << a[b[i]] << " ";
        }
        cout << "\n";
    }


    return 0;
}
