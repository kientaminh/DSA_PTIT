#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;
    cin >> q;
    stack<int> st;
    while(q--)
    {
        string s;
        cin >> s;
        if(s == "PUSH")
        {
            int x;
            cin >> x;
            st.push(x);
        }
        else if(s == "PRINT")
        {
            if(st.empty()) cout << "NONE\n";
            else
            {
                cout << st.top();
                cout << "\n";
            }
        }
        else if(s == "POP")
        {
            if(!st.empty())
                st.pop();
        }
    }


    return 0;
}
