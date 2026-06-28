#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int s, d;
        cin >> s >> d;
        if(9 * d < s)
        {
            cout << "-1\n";
        }
        else
        {
            int mn[d] = {}, i = d - 1, tmp = s - 1;
            mn[0] = 1;
            while(tmp >= 9)
            {
                tmp -= 9;
                mn[i] = 9;
                i--;
            }
            mn[i] += tmp;
            for(int j = 0; j < d; j++)
                cout << mn[j];
            cout << "\n";
        }
    }


    return 0;
}
