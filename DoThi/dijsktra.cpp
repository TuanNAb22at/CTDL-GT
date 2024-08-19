#include<bits/stdc++.h>
using namespace std;

int n,s,m,t;
vector<pair<int,int>> adj[1001];
void inp(){
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
}
int INF=10000000;

void dijkstra(int s){
	vector<long long> d(n+1,INF);
	d[s]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
	q.push({0,s});
	while(!q.empty()){
		pair<int,int> top=q.top();
		q.pop();
		int u=top.second;
		int kc=top.first;
		if(kc>d[u]){
			continue;
		}
		for(auto it:adj[u]){
			int v=it.first;
			int w=it.second;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				q.push({d[v],v});
			
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
		dijkstra(s);
		for(int i=1;i<=n;i++) adj[i].clear();
		cout<<endl;
	}

}