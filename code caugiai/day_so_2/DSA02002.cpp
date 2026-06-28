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
        int a[n + 1], b[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        stack<string> st;
        for(int i = 1; i < n; i++)
        {
            string s = "[";
            for(int j = 0; j < n - i; j++)
            {
                s = s + to_string(a[j]);
                s += " ";
                b[j] = a[j] + a[j + 1];
            }
            s = s + to_string(a[n - i]);
            s += "]";
            st.push(s);
            for(int j = 0; j < n - i; j++)
                a[j] = b[j];
        }
        cout << "[" << a[0] << "] ";
        while(!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }

    return 0;
}
