#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
vector<int> adj[100001];
bool visited[100001];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	memset(visited,false,sizeof(visited));
}

void dfs(int u){
	++ans;
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
		int kq=0;
		inp();
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				ans=0;
				dfs(i);
				kq=max(kq,ans);
			}
		}
		cout<<kq<<endl;
		for(int i=1;i<=n;i++) adj[i].clear();
	}
}