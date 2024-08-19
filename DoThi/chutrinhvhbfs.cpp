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
}

bool bfs(int u){
	visited[u]=true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int v=q.front();q.pop();
		for(int x:adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x]=true;
				par[x]=v;
			}
			else if(x!=par[v]){
				return true;
			}
		}
	}
	return false;	
}

int main(){
	inp();
	if(bfs(1)){
		cout<<"YES";
	}
	else cout<<"NO";	
}