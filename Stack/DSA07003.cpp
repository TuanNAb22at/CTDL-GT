#include<bits/stdc++.h>
using namespace std;

int dp[100001];
int main(){
	int n;cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	int ans=0;
	for(int i=1;i<=n;i++){
		dp[a[i]]=dp[a[i]-1]+1;
		ans=max(ans,dp[a[i]]);
	}
	cout<<n-ans;
	
}