#include<bits/stdc++.h>
using namespace std;
int par[1001];
vector<int> adj[1001];
int n,m;
bool visited[1001];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
	memset(par,0,sizeof(par));
}

bool dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			par[v]=u;
			if(dfs(v)) return true;
		}
		else if(v!=par[u]){
			return true;
		}
	}
	return false;
}

bool check(){
	for(int i=1;i<=n;i++){
			if(!visited[i]){
				if(dfs(i))  return true;
			}
		}
		return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		if(check()) cout<<"YES";
		else cout<<"NO";
		for(int i=1;i<=n;i++) adj[i].clear();
		cout<<endl;
	}
}