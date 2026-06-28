#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    stack<int> st;
    while(cin >> s)
    {

        if(s == "push")
        {
            int k;
            cin >> k;
            st.push(k);
        }
        if(s == "show")
        {
            stack<int> tmp;
            if(st.empty()) cout << "empty\n";
            while(!st.empty())
            {
                tmp.push(st.top());
                st.pop();
            }
            while(!tmp.empty())
            {
                cout << tmp.top() << " ";
                st.push(tmp.top());
                tmp.pop();
            }
            cout << "\n";
        }
        if(s == "pop")
        {
            st.pop();
        }
    }


    return 0;
}
