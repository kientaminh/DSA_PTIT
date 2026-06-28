#include <bits/stdc++.h>

using namespace std;

int chuyen(string s, char x, char y)
{
    int num = 0;
     for(int i = 0; i < s.size(); i++)
     {
         if(s[i] == x)
            s[i] = y;
          num = num * 10 + (s[i] - '0');
     }
     return num;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string a, b;
    cin >> a >> b;
    cout << chuyen(a, '6', '5') + chuyen(b, '6', '5') << " ";
    cout << chuyen(a, '5', '6') + chuyen(b, '5', '6');


    return 0;
}
