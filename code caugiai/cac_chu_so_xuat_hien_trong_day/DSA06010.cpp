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
        string s;
        set<char> st;
        for(int i = 0; i < n; i++)
        {
            cin >> s;
            for(int j = 0; j < s.size(); j++)
                st.insert(s[j]);
        }
        for(set<char>::iterator it = st.begin(); it != st.end(); it++)
            cout << (*it) << " ";
        cout << "\n";
    }


    return 0;
}
