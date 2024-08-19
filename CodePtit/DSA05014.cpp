#include<bits/stdc++.h>
using namespace std;
long long c[105];
long long mod=1000000007;
void init(){
	c[0]=1;
	c[1]=1;
	c[2]=2;
	for(int i=3;i<=100;i++){
		long long ans=0;
		for(int j=0;j<=i-1;j++){
			long long x=((c[j]%mod)*(c[i-j-1])%mod)%mod;
			ans=(ans%mod+x%mod)%mod;
		}
		c[i]=ans;
	}
}
int main(){
	int t;
	cin>>t;
	init();
	while(t--){
		int n;
		cin>>n;
		cout<<c[n]<<endl;
	}
}