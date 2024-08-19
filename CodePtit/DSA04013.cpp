#include<bits/stdc++.h>

using namespace std;
int cnt[100001];


int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		int r=n,l=n/2;
		int ans=n;
		while(r>=n/2-1 && l>=1){
			if(a[r]>=2*a[l]){
				ans--;
				r--;l--;
			}
			else l--;
		}
		cout<<ans<<endl;
	}
}