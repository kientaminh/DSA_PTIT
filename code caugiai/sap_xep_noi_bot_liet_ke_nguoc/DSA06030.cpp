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
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        string s = "";
        vector<string> ans;
        for(int i = 0; i < n - 1; i++)
        {
            bool kt = 0;
            s = "Buoc " + to_string(i + 1) + ": ";
            for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    swap(a[j], a[j + 1]);
                    kt = 1;
                }
            }
            for(int j = 0; j < n; j++)
                s += to_string(a[j]) + " ";
            if(kt) ans.push_back(s);
        }
        for(int i = ans.size() - 1; i >= 0; i--)
            cout << ans[i] << "\n";
    }


    return 0;
}
