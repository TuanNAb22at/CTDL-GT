#include<bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1000];
vector<int> adj[1000];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
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
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		cout<<v<<" ";
		for(int x:adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
			}
		}
	}
}
void kt(){
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			ans++;
			bfs(i);
			cout<<endl;
		}
	}
	cout<<ans;
}
int main(){
	inp();
	kt();
}