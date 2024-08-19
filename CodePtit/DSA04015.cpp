#include<bits/stdc++.h>
using namespace std;
int second(long long a[],int l,int r,long long k){
	int pos=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<=k){
			pos=m;
			l=m+1;
		}
		else r=m-1;
	}
	return pos;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;cin>>n>>k;
		long long a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(second(a,1,n,k)!=-1){
			cout<<second(a,1,n,k);
		}
		else cout<<-1;
		cout<<endl;
	}
}