#include <bits/stdc++.h>

using namespace std;

int Count(int x, int y[], int m, int spe[])
{
    // x = 0
    if(x == 0)
        return 0;
    // x = 1
    if(x == 1)
        return spe[0];
    //y > x -> x^y > y^x
    int p = upper_bound(y, y + m, x) - y;
    int ans = m - p;
    //them truong hop y = 0,1
    ans += spe[0] + spe[1];
    //x = 2 -> loai tru so 3,4
    if(x == 2)
        ans = ans - spe[3] - spe[4];
    // x = 3 -> them so 2
    if(x == 3)
        ans += spe[2];
    return ans;

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, d = 0;
        cin >> n >> m;
        int x[n + 1], y[m + 1], spe[5] = {};
        for(int i = 0; i < n; i++)
            cin >> x[i];
        for(int i = 0; i < m; i++)
        {
            cin >> y[i];
            if(y[i] < 5)
                spe[y[i]]++;
        }
        sort(y, y + m);
        for(int i = 0; i < n; i++)
            d += Count(x[i], y, m, spe);
        cout << d << "\n";
    }


    return 0;
}
