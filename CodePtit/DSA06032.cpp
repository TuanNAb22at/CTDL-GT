#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n+1];
		int ok=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		long long ans=0;
		for(int i=n;i>=1;i--){
			int l=1,r=i-1;
			while(l<r){
				if(a[l]+a[r]+a[i]<k){
					ans+=r-l;
					++l;
				}
				else if(a[l]+a[r]>=k-a[i]) r--;
			}
			
		}
		cout<<ans<<endl;
	}
}