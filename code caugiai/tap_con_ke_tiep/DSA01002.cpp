// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t, n, k, x;
    cin >> t;
    string s;
    while(t--)
    {
        int a[1005];
        cin >> n >> k;
        for(int i = 1; i <= k; i++)
            cin >> a[i];
        int tmp = k;
        while(a[tmp] == n - k + tmp) tmp--;
        if(tmp > 0)
        {
            a[tmp]++;
            for(int i = tmp + 1; i <= k; i++)
                a[i] = a[i - 1] + 1;
            for(int i = 1; i <= k; i++)
                cout << a[i] << " ";
        }
        else
        {
            for(int i = 1; i <= k; i++)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
