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
		for(int i=n;i>=2;i--){
			int l=1,r=i-1;
			while(l<r){
				if(a[l]+a[r]==k-a[i]){
					ok=1;
					break;
				}
				else if(a[l]+a[r]<k-a[i]){
					l++;
				}
				else if(a[l]+a[r]>k-a[i]) r--;
			}
			if(ok) break;
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}