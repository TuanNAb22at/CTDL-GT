#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1],dp[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			dp[i]=1;
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(a[i]>a[j]){
					dp[i]=max(dp[i],dp[j]+1);
				}
			}
		}
		int m=0;
		for(int i=1;i<=n;i++){
			m=max(m,dp[i]);
		}
		cout<<n-m<<endl;
	}
}