#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int MOD=1000000007;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long ans=1;
		if(k>n){
			cout<<0;
		}
		else{	
			for(int i=n-k+1;i<=n;i++){
				ans*=i;
				ans%=MOD;
			}
			cout<<ans;
		}
		cout<<endl;
	}
}