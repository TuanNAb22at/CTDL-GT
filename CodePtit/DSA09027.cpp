#include<bits/stdc++.h>
using namespace std;
int n,m,s,t1;
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
	for(int i=1;i<=n;i++){
		sort(begin(adj[i]),end(adj[i]));
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
void check(){
    int q;
    cin>>q;
    while(q--){
        cin>>s>>t1;
        memset(visited,false,sizeof(visited));
        dfs(s);
        if(!visited[t1]) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		check();
		for(int i=1;i<=n;i++){
		    adj[i].clear();
		}
	}
}