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
	memset(visited,false,sizeof(visited));
}

vector<pair<int,int>> canh;
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int top=q.front();
		q.pop();
		for(int x:adj[top]){
			if(!visited[x]){
				q.push(x);
				canh.push_back({top,x});
				visited[x]=true;
			}
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		inp();
		bfs(s);
		int check=1;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				check=0;
			}
		}
		if(check){	
			for(auto it:canh){
				cout<<it.first<<" "<<it.second<<endl;
			}
		}
		else cout<<-1<<endl;
		canh.clear();
		for(int i=1;i<=n;i++) adj[i].clear();
	}
}