#include <bits/stdc++.h>

using namespace std;

//n - day con tang dai nhat


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], l[n], mx = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            l[i] = 1;
            for(int j = 0; j < i; j++)
            {
                if(a[i] >= a[j] && l[i] < l[j] + 1)
                    l[i] = l[j] + 1;
            }
            mx = max(l[i], mx);
        }
        cout <<  n - mx << "\n";
    }


    return 0;
}
