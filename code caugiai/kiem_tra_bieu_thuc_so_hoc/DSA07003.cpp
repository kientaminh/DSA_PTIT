#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        stack<char> st;
        string s;
        getline(cin, s);
        bool kt = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                st.push(s[i]);
            if(s[i] == ')')
            {
                if(st.top() == '(' || st.empty())
                {
                    kt = 1;
                    break;
                }
                while(!st.empty() && st.top() != '(')
                    st.pop();
                st.pop();
            }
        }
        if(kt) cout << "Yes\n";
        else cout << "No\n";
    }


    return 0;
}
