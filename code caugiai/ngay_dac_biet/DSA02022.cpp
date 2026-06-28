#include <bits/stdc++.h>

using namespace std;

vector<string> y;

void sinh()
{
    string s = "2000";
    while(1)
    {
        bool ok = 0;
        y.push_back(s);
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] == '0')
            {
                ok = 1;
                s[i] = '2';
                for(int j = i + 1; j < s.size(); j++)
                    s[j] = '0';
                break;
            }
        }
        if(!ok) break;
    }
}


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string d[] = {"02", "20", "22"};
    string m[] = {"02"};
    sinh();
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < y.size(
                                  ); j++)
            cout << d[i] << "/02/" << y[j] << "\n";

    }
    return 0;
}
