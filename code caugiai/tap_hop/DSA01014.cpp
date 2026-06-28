#include <bits/stdc++.h>

using namespace std;

int n, k, s, d;

void Try(int i, int pre, int sum)
{
    for(int j = pre + 1; j <= n; j++)
    {
        if(sum + j <= s)
        {
            if(i == k && sum + j == s)
            {
                d++;
            }
            else Try(i + 1, j, sum + j);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    while(1)
    {
        cin >> n >> k >> s;
        if(!n && !k && !s) break;
        d = 0;
        Try(1, 0, 0);
        cout << d << "\n";
    }


    return 0;
}
