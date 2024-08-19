#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
long long powmod(long long a,long long b){
	long long r=1;
	while(b){
		if(b%2==1) r=r*a%mod;
		a=a*a%mod;
		b/=2;
	}
	return r;
}
int main(){
	while(1){
		long long a,b;
		cin>>a>>b;
		if(a==0 && b==0) break;
		else{
			cout<<powmod(a,b)<<endl;
		}
	}
}