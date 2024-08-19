#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n+1];
		int ok=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			a[i]=a[i]*a[i];
		}
		sort(a+1,a+n+1);
		for(int i=n;i>=1;i--){
			int l=1,r=i-1;
			while(l<=r){
				if(a[l]+a[r]==a[i]){
					ok=1;
					break;
				}
				else if(a[l]+a[r]<a[i]){
					l++;
				}
				else if(a[l]+a[r]>a[i]) r--;
			}
		}
		if(ok) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}