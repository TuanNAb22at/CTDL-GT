#include<bits/stdc++.h>
using namespace std;

using ll=long long;

struct edge {
	int u,v,w;
};

int n,m;
int par[1001],sz[1001];
void make_set(){
	for(int i=1;i<=n;i++){
		par[i]=i;
		sz[i]=1;
	}
}
int find(int v){
	if(v==par[v]) return v;
	return par[v]=find(par[v]);
}
bool Union(int a,int b){
	a=find(a);
	b=find(b);
	if(a==b) return false;
	if(sz[a]<sz[b]) swap(a,b);
	par[b]=a;
	sz[a]+=sz[b];
	return true;
}

vector<edge> canh;

void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		edge e;
		e.u=x;
		e.v=y;
		e.w=w;
		canh.push_back(e);
	}
}

bool cmp(edge a,edge b){
	return a.w<b.w;
}

void kruskal(){
	vector<edge> mst;
	int d=0;
	sort(begin(canh),end(canh),cmp);
	for(int i=0;i<m;i++){
		if(mst.size()==n-1) break;
		edge e=canh[i];
		if(Union(e.u,e.v)){
			mst.push_back(e);
			d+=e.w;
		}
	}
	cout<<d<<endl;
//	for(auto it:mst){
//		cout<<it.u<<" "<<it.v<<endl;
//	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	    inp();
	    make_set();
	    kruskal();
		canh.clear();
	}
}