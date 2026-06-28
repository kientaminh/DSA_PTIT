#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    string s = "";
    vector<string> ans;
    for(int i = 1; i <= n; i++)
    {
        s = "Buoc " + to_string(i - 1) + ": ";
        for(int k = 0; k < i; k++)
            s += to_string(a[k]) + " ";
        int j = i - 1, tmp = a[i];
        while(j >= 0 && tmp < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        ans.push_back(s);
    }
    for(int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << "\n";

    return 0;
}
