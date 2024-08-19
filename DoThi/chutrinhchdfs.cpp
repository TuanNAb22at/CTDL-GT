#include<bits/stdc++.h>
using namespace std;
int n,m,t,s;
vector<int> adj[1001];
int color[1001];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
	}
}

bool dfs(int u){
	color[u]=1;
	for(int v:adj[u]){
		if(color[v]==0){
			if(dfs(v)) return true;
		}
		else if(color[v]==1){
			return true;
		}
	}
	color[u]=2;
	return false;
}
int main(){
	inp();
	for(int i=1;i<=n;i++){
		if(color[i]==0){
			if(dfs(i)){
				cout<<"YES";
				return 0;
			}
		}
	}
}