#include<bits/stdc++.h>

using namespace std;

int search(int a[],int l,int r,int k){
	int pos=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]<=k){
			pos=m;
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	return pos;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int cnt=0;
		map<int,int> mp;
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			mp[i]=0;
		}
		sort(a+1,a+n+1,greater<int>());
		for(int i=1;i<=n;i++){
			if(mp[i]==0 && search(a,i+1,n,a[i]/2)!=-1){
				
					mp[i]=1;
					mp[search(a,i+1,n,a[i]/2)]=1;
					cout<<a[i]<<" "<<a[search(a,i+1,n,a[i]/2)]<<endl;
				
				
			}
		}
		cout<<cnt<<endl;
	}
}