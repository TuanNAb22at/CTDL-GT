#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ans=0;
		for(int i=1;i<=n-1;i++){
			if(a[i]>a[i+1]){
				ans=i;
				break;
			}
		}
		cout<<ans<<endl;
	}
}