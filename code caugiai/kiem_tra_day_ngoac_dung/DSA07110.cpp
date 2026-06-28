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
        stack<char> st;
        bool kt = 1;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                if(!st.empty() && st.top() == '(') st.pop();
                else {
                    kt = 0;
                    break;
                }
            }
            else if(s[i] == ']')
            {
                if(!st.empty() && st.top() == '[') st.pop();
                else
                {
                    kt = 0;
                    break;
                }
            }
            else if(s[i] == '}')
            {
                if(!st.empty() && st.top() == '{') st.pop();
                else
                {
                    kt = 0;
                    break;
                }
            }
            else
                st.push(s[i]);
        }
        if(!st.empty())
            kt = 0;
        if(kt == 1) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}
