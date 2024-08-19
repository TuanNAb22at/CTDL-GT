#include<bits/stdc++.h>
using namespace std;
int main(){
	int C,n;
	cin>>n>>C;
	int a[n+1];
	int v[n+1],w[n+1];
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	int dp[n+1][C+1];
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=C;j++){
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]){
				dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<dp[n][C];
}