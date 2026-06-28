#include <bits/stdc++.h>

using namespace std;

bool w[73];

bool check(string s)
{
    for(int i = 1; i < s.size() - 1; i++)
        if(!w[(int)s[i - 1]] && w[(int)s[i]] && !w[(int)s[i + 1]])
            return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char c;
    cin >> c;
    string s = "";
    for(char k = 'A'; k <= c; k++)
        s += k;
    w[65] = 1;
    w[69] = 1;
    if(check(s)) cout << s << "\n";
    while(next_permutation(s.begin(), s.end()))
    {
        if(check(s))
            cout << s << "\n";
    }


    return 0;
}
