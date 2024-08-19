#include<bits/stdc++.h>
using namespace std;
int n,m,t,s;
vector<int> adj[1000];
bool visited[1000];
int parent[1000];
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
	cin>>s>>t;
}
void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			parent[v]=u;
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
		for(int x:adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
				parent[x]=v;
			}
		}
	}
}

void Path(){
	memset(visited,false,sizeof(visited));
	memset(parent,0,sizeof(int));
	bfs(s);
	if(!visited[t]){
		cout<<"ko co dg di\n";
	}
	else{
		vector<int> path;
		while(t!=s){
			path.push_back(t);
			t=parent[t];
		}
		path.push_back(s);
		reverse(begin(path),end(path));
		for(int x:path){
			cout<<x<<" ";
		}
	}
}
int main(){
	inp();
	Path();
}