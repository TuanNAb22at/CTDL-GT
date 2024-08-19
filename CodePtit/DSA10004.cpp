#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
int canh[1001];

void inp(){
	cin>>n>>m;
	memset(canh,0,sizeof(canh));
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
		canh[x]++;
		canh[y]++;
	}
	int dem=0;
	for(int i=1;i<=n;i++){
		if(canh[i]%2!=0){
			dem++;
		}
	}
	if(dem==0){
		cout<<2;
	}
	else if(dem==2){
		cout<<1;
	}
	else cout<<0;
	cout<<endl;
	for(int i=1;i<=n;i++) adj[i].clear();
	
}
int main() {
	int t;cin>>t;
	while(t--)
		inp();
}