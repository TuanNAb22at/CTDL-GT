#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001],r_adj[1001];
bool visited[1001];
stack<int> st;
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		r_adj[y].push_back(x);
	}
}
void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	st.push(u);
}

void dfs1(int u){
	visited[u]=true;
	cout<<u<<" ";
	for(int v:r_adj[u]){
		if(!visited[v]){
			dfs1(v);
		}
	}
}

void scc(){
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
		}
	}
	memset(visited,false,sizeof(visited));
	while(!st.empty()){
		int u=st.top();st.pop();
		if(!visited[u]){
			dfs1(u);
			cout<<endl;
		}
	}
	
}
int main(){
	inp();
	scc();
}