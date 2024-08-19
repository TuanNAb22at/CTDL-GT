#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int n,m;
int vao[1001];
vector<int> topo;

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		vao[y]++;
	}
}
void kahn(){
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(vao[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		cout<<u<<" ";
		for(int v:adj[u]){
			vao[v]--;
			if(vao[v]==0){
				q.push(v);
			}
		}
	}
}
int main(){
	inp();
	kahn();
}