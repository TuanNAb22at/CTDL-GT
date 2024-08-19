#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
bool visited[1001];
int n,m;
vector<int> topo;
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	topo.push_back(u);
}
int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	reverse(begin(topo),end(topo));
	for(int x:topo){
		cout<<x<<" ";
	}
}