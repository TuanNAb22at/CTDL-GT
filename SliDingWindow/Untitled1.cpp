#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int sum=INT_MIN,ind,s=0;
		for(int i=1;i<=k;i++){
			s+=a[i];
		}
		for(int i=k+1;i<=n;i++){
			s=s+a[i]-a[i-k];
			if(s>=sum){
				sum=s;
				ind=i;
			}
		}
		cout<<sum<<endl;
		for(int i=ind-k+1;i<=ind;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}