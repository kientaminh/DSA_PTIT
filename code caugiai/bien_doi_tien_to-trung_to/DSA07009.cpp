#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
                st.push(string(1, s[i]));
            else
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                st.push("(" + a + s[i] + b + ")");
            }
        }
        cout << st.top() << "\n";
    }


    return 0;
}
