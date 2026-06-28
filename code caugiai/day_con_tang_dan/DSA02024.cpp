#include <bits/stdc++.h>

using namespace std;

int n;
int a[21];
int x[21]; //mang luu day con tang
vector<string> ans;

void add(int m)
{
    string s = "";
    for(int i = 1; i <= m; i++)
        s += to_string(x[i]) + " ";
    ans.push_back(s);
}

void Try(int i, int pre)
{
    for(int j = pre + 1; j <= n; j++)
    {
        if(i == 1 || a[j] > x[i - 1])
        {
            x[i] = a[j];
            if(i > 1)
                add(i);
            Try(i + 1, j);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    Try(1, 0);
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << "\n";


    return 0;
}
