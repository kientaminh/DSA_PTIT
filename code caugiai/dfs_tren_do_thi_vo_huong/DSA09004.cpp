#include<bits/stdc++.h>
using namespace std;
vector<int>ke[1001];

int n,m,used[1001],pre[1001];
int s;
void in(){
		cin>>n;
		cin>>m>>s;
	memset(used,0,sizeof(used));

	for(int i=1;i<=n;i++){
		ke[i].clear();
	}


	for(int i=0;i<m;i++){
		int x,y;
		 cin>>x>>y;
		 ke[x].push_back(y);
		 ke[y].push_back(x);
	}


}
void dfs(int u){
	used[u]=1;
	cout<<u<<" ";
	for(int v: ke[u]){
		if(used[v]==0){

			dfs(v);
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		in();
		dfs(s);
		cout<<endl;

	}
}
