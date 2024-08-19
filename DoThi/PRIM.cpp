#include<bits/stdc++.h>
using namespace std;

int n,m;
struct canh{
	int x,y,w;
};
vector<pair<int,int>> adj[1001];
bool used[1001];

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
	memset(used,false,sizeof(used));
}

void prim(int u){
	vector<canh> mst;
	int d=0;
	used[u]=true;
	while(mst.size() < n-1){
		int Min_w=INT_MAX;
		int x,y;
		for(int i=1;i<=n;i++){
			if(used[i]==true){
				for(auto it:adj[i]){
					int j=it.first,trongso=it.second;
					if(!used[j] && trongso<Min_w){
						Min_w=trongso;
						x=j;y=i;
						//x thuoc v , y thuoc vmst
					}
				}
			}
		}
		mst.push_back({x,y,Min_w});
		d+=Min_w;
		used[x]=true;
	}
	cout<<d<<endl;
}
int main(){
	inp();
	prim(1);
}