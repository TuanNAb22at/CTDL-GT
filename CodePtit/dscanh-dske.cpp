#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> adj[1000];
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<":"<<" ";
		sort(begin(adj[i]),end(adj[i]));
		for(int j=0;j<adj[i].size();j++){
			cout<<adj[i][j]<<" ";
		}
		cout<<endl;
	}
}