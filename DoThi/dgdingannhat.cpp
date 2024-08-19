#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[100][100];
bool visited[100][100];
int x1,x2,y2;
int y11;
int d[100][100];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};


void bfs(int i,int j){
	visited[i][j]=true;
	queue<pair<int,int>> q;
	q.push({i,j});
	d[i][j]=0;
	while(!q.empty()){
		pair<int,int> top=q.front();q.pop();
		cout<<top.first<<" "<<top.second<<endl;
			for(int k=0;k<4;k++){
			int i1=top.first+dx[k];
			int j1=top.second+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='x' && !visited[i1][j1]){
				d[i1][j1]=d[top.first][top.second]+1;
				q.push({i1,j1});
				visited[i1][j1]=true;
			}
		}
	}
}
void inp(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	cin>>x1>>y11>>x2>>y2;
	bfs(x1,y11);
	if(!visited[x2][y2]){
		cout<<"NO"<<endl;
	}
	else{
		cout<<d[x2][y2]+2;
	}
	
}
int main(){
	inp();
}