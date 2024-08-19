#include<bits/stdc++.h>
using namespace std;
int n,m,s;
vector<int> adj[1000];
bool visited[1000];

void inp(){
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		sort(begin(adj[i]),end(adj[i]));
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	cout<<u<<" ";
	visited[u]=true;
		for(int v:adj[u]){
			if(!visited[v]){
				dfs(v);
			}
		}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		dfs(s);
	}
}