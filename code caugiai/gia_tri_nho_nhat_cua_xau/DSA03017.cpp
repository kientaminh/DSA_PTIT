#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        string s;
        cin >> k >> s;
        map<char, int> m;
        priority_queue<int> pq;
        for(int i = 0; i < s.size(); i++)
            m[s[i]]++;
        for(map<char, int>::iterator it = m.begin(); it != m.end(); it++)
        {
            pq.push((*it).second);
        }
        while(k--)
        {
            int x = pq.top();
            pq.pop();
            pq.push(x - 1);
        }
        int sum = 0;
        while(pq.size())
        {
            sum += pq.top() * pq.top();
            pq.pop();
        }
        cout << sum << "\n";
    }


    return 0;
}
