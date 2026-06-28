#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int, int> a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i + 1;
        }
        sort(a, a + n);
        int Min = a[0].second, Max = -1, tmp = a[0].first; //Min: vi tri nho nhat, Max: khoang cach lon nhat
        for(int i = 1; i < n; i++)
        {
            if(a[i].first > tmp)
                Max = max(Max, a[i].second - Min);
            if(a[i].second < Min)
            {
                Min = a[i].second;
                tmp = a[i].first;
            }

        }
        cout << Max << "\n";
    }


    return 0;
}
