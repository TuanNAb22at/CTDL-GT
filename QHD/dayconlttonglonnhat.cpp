#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		int a[10001];
		int local[10001];
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int res=INT_MIN;
		local[1]=a[1];
		for(int i=2;i<=n;i++){
			local[i]=max(local[i-1]+a[i],a[i]);
			res=max(res,local[i]);
		}
		cout<<res<<endl;
	}
}