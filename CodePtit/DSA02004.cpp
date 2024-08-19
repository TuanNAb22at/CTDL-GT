#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,ok;
string path="DLRU";
string s;
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
void inp(){
	s="";
	ok=0;
	memset(a,0,sizeof(a));
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
}

void dfs(int i,int j){
	a[i][j]=0;
	if(i==n && j==n){
		ok=1;
		cout<<s<<" ";
	}
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1]==1){
			s+=path[k];
			dfs(i1,j1);
			a[i1][j1]=1;
			s.pop_back();
		}
	}	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		inp();
			if(a[1][1] && a[n][n]){
				dfs(1,1);
			}
			if(ok==0){
				cout<<-1;
			}
		cout<<endl;
	}