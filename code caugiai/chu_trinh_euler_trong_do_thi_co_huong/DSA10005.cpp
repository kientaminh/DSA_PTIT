#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int u,v;
        int vao[n+1] = {};
        int ra[n+1] = {};
        while(m--)
        {
            cin>>u>>v;
            vao[u]++;
            ra[v]++;
        }

        bool ok = 1;
        for(int i=1; i<=n; ++i)
        {
            if(vao[i] != ra[i])
            {
                ok = 0;
                break;
            }
        }

        cout<<ok<<"\n";
    }
}
