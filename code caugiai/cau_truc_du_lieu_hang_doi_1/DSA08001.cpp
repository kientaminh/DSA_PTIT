#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n;
        deque<int> dq;
        while(n--)
        {
            cin >> k;
            if(k == 1)
            {
                cout << dq.size() << "\n";
            }
            if(k == 2)
            {
                if(dq.empty()) cout << "YES\n";
                else cout << "NO\n";
            }
            if(k == 3)
            {
                int x;
                cin >> x;
                dq.push_back(x);
            }
            if(k == 4)
            {
                if(!dq.empty())
                    dq.pop_front();
            }
            if(k == 5)
            {
                if(!dq.empty())
                    cout << dq.front() << "\n";
                else cout << "-1\n";
            }
            if(k == 6)
            {
                if(!dq.empty())
                    cout << dq.back() << "\n";
                else cout << "-1\n";
            }
        }
    }


    return 0;
}
