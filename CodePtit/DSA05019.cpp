#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n+1][m+1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				if(a[i][j]){
					a[i][j]=min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]))+a[i][j];
				}
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				ans=max(ans,a[i][j]);
			}
		
		}
		cout<<ans<<endl;
	}
}