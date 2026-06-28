#include <bits/stdc++.h>

using namespace std;

// k la so ki tu nhieu nhat, n - k la so ki tu con lai
// (k - 1) * (d - 1) la so khoang trong giua cac ki tu k
// n - k >= (k - 1) * (d - 1) thi thoa man
// => k - (n - k) / (d - 1) <= 1


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int d, k = 0;
        string s;
        cin >> d >> s;
        int n = s.size();
        map<char, int> m;
        for(int i = 0; i < n; i++)
            m[s[i]]++;
        for(map<char, int> :: iterator it = m.begin(); it != m.end(); it++)
            if(k < (*it).second)
                k = (*it).second;
        if(k - (n - k) / (d - 1) <= 1) cout << "1\n";
        else cout << "-1\n";
    }



    return 0;
}
