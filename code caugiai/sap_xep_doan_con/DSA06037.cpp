#include <bits/stdc++.h>

using namespace std;

// tim max, min trong doan con roi so sanh

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], l[n], r[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        l[0] = a[0];
        r[n - 1] = a[n - 1];
        //max 0 -> n
        for(int i = 1; i < n; i++)
        {
            if(a[i] > l[i - 1])
                l[i] = a[i];
            else l[i] = l[i - 1];
        }
        //min n -> 0
        for(int i = n - 2; i >= 0; i--)
        {
            if(a[i] < r[i + 1])
                r[i] = a[i];
            else r[i] = r[i + 1];
        }
        vector<int> ans;
        for(int i = 0; i < n - 1; i++)
        {
            if(l[i] <= r[i + 1])
                ans.push_back(i + 1);
        }
        cout << ans.size() << "\n";
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << "\n";
    }


    return 0;
}
