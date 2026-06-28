#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;
    cin >> q;
    deque<int> dq;
    while(q--)
    {
        string s;
        cin >> s;
        if(s == "PUSH")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "POP")
        {
            if(!dq.empty())
                dq.pop_front();
        }
        else
        {
            if(!dq.empty())
                cout << dq.front() << "\n";
            else cout << "NONE\n";
        }
    }


    return 0;
}
