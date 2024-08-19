#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){	
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		int sum=INT_MIN;
		for(int i=1;i<=n;i++){
			int res=0;
			for(int j=i;j<=n;j++){
				res+=a[j];
				sum=max(sum,res);
			}	
		}
		cout<<sum<<endl;
	}
}