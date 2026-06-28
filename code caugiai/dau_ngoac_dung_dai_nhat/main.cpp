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
        stack<int> st;
        int res = -1;
        st.push(-1);
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
            }
            else
            {
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                {
                    res = max(res, i - st.top());
                }
            }
        }
        cout << res << "\n";
    }


    return 0;
}
