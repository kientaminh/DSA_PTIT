#include <bits/stdc++.h>

using namespace std;

int xuly(int a, int b, char c)
{
    if(c == '+')
        return a + b;
    if(c == '-')
        return a - b;
    if(c == '*')
        return a * b;
    if(c == '/')
        return a / b;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<int> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(xuly(b, a, s[i]));
            }
            else
                st.push(s[i] - '0');
        }
        cout << st.top() << "\n";
    }


    return 0;
}
