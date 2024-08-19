#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
bool visited[1001];

void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
}

void dfs(int u){
	visited[u]=true;
	for(int v:adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void dinhtru(){
	int ans=0;
	int tplt=0;
	memset(visited,false,sizeof(visited));
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			tplt++;
			dfs(i);
		}
	}
	
	for(int i=1;i<=n;i++){
		memset(visited,false,sizeof(visited));
		int dem=0;
		visited[i]=true;
		for(int j=1;j<=n;j++){
			if(!visited[j]){
				++dem;
				dfs(j);
			}
		}
		if(dem>tplt){
			cout<<i<<" ";
			++ans;
		}
	}
	cout<<ans<<endl;
}
int main(){
	inp();
	dinhtru();
}