#include<bits/stdc++.h>

using namespace std;
long long mul(int n){
	if(n==0) return 1;
	if(n==1) return 2;
	long long p=mul(n/2);
	if(n%2) return 2*p*p;
	return p*p;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long len=mul(n);
		while(1){
			if(n==1){
				cout<<1;
				break;
			}
			if(len==k){
				cout<<n;
				break;
			}
			if(k>len){
				k=len-(k-len);
			}
			n--;
			len/=2;
		}
		cout<<len<<endl;
	}
}