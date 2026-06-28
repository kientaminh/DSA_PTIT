#include <bits/stdc++.h>

using namespace std;

const int Nmax = 1e6;
int N[Nmax + 1];

void sang()
{
    N[0] = 1;
    N[1] = 1;
    for(int i = 2; i <= sqrt(Nmax); i++)
    {
        if(N[i] == 0)
        {
            for(int j = i * i; j <= Nmax; j += i)
                N[j] = 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sang();
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        bool ok = 0;
        cin >> n;
        for(int i = 2; i <= n / 2; i++)
        {
            if(!N[i] && !N[n - i])
            {
                cout << i << " " << n - i << "\n";
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "-1\n";
    }


    return 0;
}
