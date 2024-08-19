#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		int n;cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int l,r;
		for(int i=1;i<n;i++){
			if(a[i]>a[i+1]){
				l=i;
				break;
			}
		}
		for(int i=n;i>=1;i--){
			if(a[i]<a[i-1]){
				r=i;
				break;
			}
		}
		int m1=*max_element(a+l,a+r+1);
		int m2=*min_element(a+l,a+r+1);
		for(int i=1;i<=l;i++){
			if(m2<a[i]){
				l=i;
				m2=a[i];
			}
		}
	
		for(int i=n;i>=r;i--){
			if(m1>a[i]){
				r=i;
				m1=a[i];
				break;
			}
		}

		cout<<l<<" "<<r<<endl;
	}
}