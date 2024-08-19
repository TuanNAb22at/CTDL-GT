#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;cin>>t;	
	while(t--){
		int n;cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		vector<int> v1,v2;
		int x;
		if(n%2==0){
			x=n/2;
		}else{
			x=n/2+1;
		}
		for(int i=1;i<=x;i++){
			v1.push_back(a[i]);
		}
		for(int i=x+1;i<=n;i++){
			v2.push_back(a[i]);
		}
		if(n%2==0){
			for(int i=1;i<=n/2;i++){
				cout<<v1[i-1]<<" "<<v2[i-1]<<" ";
			}
		}
		else{
			for(int i=1;i<=n/2;i++){
				cout<<v1[i-1]<<" "<<v2[i-1]<<" ";
			}
			cout<<v1[n/2];
		}
		cout<<endl;
	
	}
}