#include<bits/stdc++.h>
using namespace std;
int n,m,s;
vector<int> adj[1001];
bool visited[1001];
void inp(){
    cin>>n>>m>>s;
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
        int top=q.front();q.pop();
        cout<<top<<" ";
        for(int x:adj[top]){
            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		bfs(s);
		for(int i=1;i<=n;i++){
		    adj[i].clear();
		}
		cout<<endl;
	}
}
