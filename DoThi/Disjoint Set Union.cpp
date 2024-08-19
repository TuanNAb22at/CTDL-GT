#include<bits/stdc++.h>
using namespace std;
int par[1005],size[1005];
int n;
void inp(){
	cin>>n;
}
void make_set(){
	for(int i=1;i<=n;i++){
		par[i]=i;
		size[i]=1;
	}	
}

int find(int v){
	if(v==par[v]) return v;
	return par[v]=find(par[v]);
}

void Union(int a,int b){
	a=find(a);
	b=find(b);
	if(a!=b){
		if(size[a] < size[b]) swap(a,b);
		par[b]=a;
		size[a]+=b;
	}
}


int main(){

}