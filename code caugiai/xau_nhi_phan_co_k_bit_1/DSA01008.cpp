#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, a[20];
        cin >> n >> k;
        stack<string> st;
        memset(a, 0, sizeof(a)); //mang a de luu vi tri
        for(int i = 0; i < k; i++)
            a[i] = i;
        while(1)
        {
            string s = "";
            for(int i = 0; i < n; i++)
                s += '0';
            for(int i = 0; i < k; i++)
                s[a[i]] = '1';
            st.push(s);
            bool ok = 0;
            for(int i = k - 1; i >= 0; i--)
            {
                if(a[i] != n - k + i)
                {
                    ok = 1;
                    a[i]++;
                    for(int j = i + 1; j < k; j++)
                        a[j] = a[j - 1] + 1;
                    break;
                }
            }
            if(ok == 0) break;
       }
       while(!st.empty())
       {
           cout << st.top() << "\n";
           st.pop();
       }
    }


    return 0;
}
