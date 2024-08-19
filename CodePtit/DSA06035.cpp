#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n+1];
		int ans=0,res=1,ok=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		int l=1,r=n;
		int dem1=1,dem2=1;
		while(l<r){
			if(a[l]<a[l+1]]){
				l=l+1;
				dem1++;
			}
			if(a[r]<a[r-1]){
				dem2++;
				r=r-1;
			}
			if(l==r){
				
			}
			l++;
			r--;
			
		}
		cout<<ans<<endl;
	}
}