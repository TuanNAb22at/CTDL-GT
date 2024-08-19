#include<bits/stdc++.h>
using namespace std;
int a[100][100],n;

void Try(int i,int j,string s){
	if(i==n && j==n){
		cout<<s<<" ";
	}
	if(i+1<=n && a[i+1][j]){
		Try(i+1,j,s+'D');
	}
	if(j+1<=n && a[i][j+1]){
		Try(i,j+1,s+'R');
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) cin>>a[i][j];
		}
		if(a[1][1] && a[n][n]) Try(1,1,"");
		cout<<endl;
	}
}