#include <bits/stdc++.h>

using namespace std;

const int x[] = {1, 0};
const int y[] = {0, 1};

string s = "";
int a[11][11], n;
vector<string> st;
void Try(int i, int j)
{
    if(i == n - 1  && j == n - 1)
    {
        st.push_back(s);
        return;
    }
    int X, Y;
    for(int k = 0; k < 2; k++)
    {
        X = i + x[k];
        Y = j + y[k];
        if(a[X][Y] == 1 && x[k] == 1 && X < n && Y < n)
        {
            s += "D";
            Try(X, Y);
            s.pop_back();
        }
        else if(a[X][Y] == 1 && y[k] == 1 && X < n && Y < n)
        {
            s += "R";
            Try(X, Y);
            s.pop_back();
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a[i][j];
        if(a[0][0] == 1)
            Try(0, 0);
        if(st.size() == 0)
            cout << "-1\n";
        else
        {
            for(int i = 0; i < st.size(); i++)
                cout << st[i] << " ";
            cout << "\n";
        }
        st.clear();
        s = "";
    }


    return 0;
}
