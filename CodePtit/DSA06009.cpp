#include<bits/stdc++.h>
using namespace std;
int first(int a[],int l,int r,int k){
	int pos=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==k){
			pos=m;
			r=m-1;
		}
		else if(a[m]>k) r=m-1;
		else l=m+1;
	}
	return pos;
}
int last(int a[],int l,int r,int k){
	int pos=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]==k){
			pos=m;
			l=m+1;
		}
		else if(a[m]>k)	r=m-1;
		else l=m+1;;
	}
	return pos;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		long long dem=0;
		for(int i=1;i<=n;i++){
			if(first(a,i+1,n,k-a[i])!=-1){
				int p1=first(a,i+1,n,k-a[i]),p2=last(a,i+1,n,k-a[i]);
				dem+=p2-p1+1;
			}
		}
		cout<<dem<<endl;
		
	}
}