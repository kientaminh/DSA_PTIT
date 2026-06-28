#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    vector<string> ans;
    string s = "";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        int k = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[k] > a[j])
                k = j;
        }
        swap(a[k], a[i]);
        s = "Buoc " + to_string(i + 1) + ": ";
        for(int j = 0; j < n; j++)
            s += to_string(a[j]) + " ";
        ans.push_back(s);
    }
    for(int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << "\n";

    return 0;
}
