#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n],b[n-1];
		int ok=0;
		long long ind;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++) cin>>b[i];
		for(int i=0;i<n-1;i++){
			if(a[i]!=b[i]){
				ind=i+1;
				ok=1;
				break;
			}
		}
		if(ok){
			cout<<ind;
		}
		else cout<<n;
		cout<<endl;
	}
}