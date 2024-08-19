#include<bits/stdc++.h>
using namespace std;
int n,m,t,s;
vector<int> adj[1001];
int vao[1001];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		vao[y]++;
	}
}

bool kahn(int u){
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(vao[i]==0){
			q.push(i);
		}
	}
	int cnt=0;
	while(!q.empty()){
		int v=q.front();q.pop();
		++cnt;
		for(int x:adj[v]){
			vao[x]--;
			if(vao[x]==0){
				q.push(x);
			}
		}
	}
	if(cnt==n){
		return false;
	}
	return true;
}
int main(){
	inp();
	if(kahn){
		cout<<"YES";
	}
	else cout<<"NO";
}