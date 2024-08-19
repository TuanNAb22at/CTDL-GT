#include<bits/stdc++.h>
using namespace std;
int n,m,s,t;
vector<int> adj[1001];
bool visited[1001];
int par[1001];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++)
	sort(begin(adj[i]),end(adj[i]));
}

bool dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			par[v]=u;
			if(dfs(v)) return true;
		}
		else if(v!=par[u] && v==1){
			s=v;
			t=u;
			return true;
		}
	}
	return false;
}

int main(){
	int x;cin>>x;
	while(x--){
		inp();
		if(dfs(1)){
			vector<int> path;
			path.push_back(s);
			while(t!=s){
				path.push_back(t);
				t=par[t];
			}
			path.push_back(t);
			reverse(begin(path),end(path));
			
				for(int x:path) cout<<x<<" ";
			
		}
		else cout<<"NO";
		for(int i=1;i<=n;i++) adj[i].clear();
		cout<<endl;
	}
}