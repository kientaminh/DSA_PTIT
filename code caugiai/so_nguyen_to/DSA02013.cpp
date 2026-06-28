#include <bits/stdc++.h>

using namespace std;

vector<int> nguyento;
vector<string> ans;
int n, p, s, x[201];

bool snt(int m)
{
    if(m == 0 || m == 1) return 0;
    if(m <= 3) return 1;
    for(int i = 2; i <= sqrt(m); i++)
        if(m % i == 0)
            return 0;
    return 1;
}

void print(int i)
{
    string a = "";
    for(int j = 0; j <= i; j++)
    {
        a += to_string(x[j]) + " ";
    }
    ans.push_back(a);
}

void Try(int i, int pre, int sum)
{
    for(int j = pre + 1; j < nguyento.size(); j++)
    {
        if(nguyento[j] + sum <= s && nguyento[j] > p)
        {
            x[i] = nguyento[j];
            if(i == n - 1 && nguyento[j] + sum == s)
            {
                print(i);
            }
            else Try(i + 1, j, sum + nguyento[j]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for(int i = 2; i < 200; i++)
        if(snt(i)) nguyento.push_back(i);
    while(t--)
    {
        cin >> n >> p >> s;
        Try(0, 0, 0);
        cout << ans.size() << "\n";
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << "\n";
        ans.clear();
    }


    return 0;
}
