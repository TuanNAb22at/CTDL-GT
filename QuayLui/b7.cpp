#include<bits/stdc++.h>
using namespace std;
int a[100][100],n,m,cnt=0;
void Try(int i,int j){
	if(i==n && j==m){
		cnt++;
		return;
	}	
	if(i+1<=n){
		Try(i+1,j);
	}
	if(j+1<=m){
		Try(i,j+1);
	}

}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cnt=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) cin>>a[i][j];
		}
		Try(1,1);
		cout<<cnt<<endl;
	}
}