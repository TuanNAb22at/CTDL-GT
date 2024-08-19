#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
int deg1[1001],deg2[1001];
void inp(){
	memset(deg1,0,sizeof(deg1));
	memset(deg2,0,sizeof(deg2));
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		adj[x].push_back(y);
		deg1[x]++;
		deg2[y]++;
	}
	int ok=1;
	for(int i=1;i<=n;i++){
		if(deg1[i]!=deg2[i]){
			ok=0;
		}
	}
	if(ok) cout<<1;
	else cout<<0;
	cout<<endl;
	for(int i=1;i<=n;i++){
		adj[i].clear();
	}
}

int main(){
	int t;cin>>t;
	while(t--)
		inp();
}